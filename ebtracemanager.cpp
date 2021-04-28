//
// Created by erban on 2021/4/28.
//

#include "ebtracemanager.h"
using namespace erban;

std::shared_ptr<EBTraceInstance> EBTraceManager::CreateTraceInstance(const std::string &remark)
{
	auto info = m_check_fnc(remark);
	if (info)
	{
		return CreateTraceInstance(remark,
		                           info->trace_type,
		                           info->debug_type,
		                           info->info_type,
		                           info->warn_type,
		                           info->error_type,
		                           info->critical_type);
	}
	return nullptr;
}

std::shared_ptr<EBTraceInstance> erban::EBTraceManager::CreateTraceInstance(const std::string &remark,
                                                                            int trace_type,
                                                                            int debug_type,
                                                                            int info_type,
                                                                            int warn_type,
                                                                            int error_type,
                                                                            int critical_type)
{
	std::shared_ptr<EBTraceInstance> instance = std::make_shared<EBTraceInstance>();
	instance->SetRemark(remark);

	instance->SetTraceFnc(m_type_fnc[trace_type]);
	instance->SetTraceType(trace_type);

	instance->SetDebugFnc(m_type_fnc[debug_type]);
	instance->SetDebugType(debug_type);

	instance->SetInfoFnc(m_type_fnc[info_type]);
	instance->SetInfoType(info_type);

	instance->SetWarnFnc(m_type_fnc[warn_type]);
	instance->SetWarnType(warn_type);

	instance->SetErrorFnc(m_type_fnc[error_type]);
	instance->SetErrorType(error_type);

	instance->SetCriticalFnc(m_type_fnc[critical_type]);
	instance->SetCricitalType(critical_type);

	return instance;
}
bool EBTraceManager::SetCheckTraceTypeCallback(int type, std::function<void(const std::string &)> fnc)
{
	if(type <0 || type>= MessageType::em_type_count)
	{
		return false;
	}
	m_type_fnc[type] = fnc;
	return true;
}
