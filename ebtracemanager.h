//
// Created by erban on 2021/4/28.
//

#ifndef EBTRACEMANAGER_H
#define EBTRACEMANAGER_H


#include <memory>
#include "utility.h"
#include "ebtraceinstance.h"
namespace erban
{
struct EBTraceInfo
{
	MessageType trace_type;
	MessageType debug_type;
	MessageType info_type;
	MessageType warn_type;
	MessageType error_type;
	MessageType critical_type;
};

class EBTraceManager
{
public:
	std::shared_ptr<EBTraceInstance> CreateTraceInstance(const std::string& remark);
private:
	std::shared_ptr<EBTraceInstance> CreateTraceInstance(const std::string &remark,
	                                                     MessageType trace_type,
	                                                     MessageType debug_type,
	                                                     MessageType info_type,
	                                                     MessageType warn_type,
	                                                     MessageType error_type,
	                                                     MessageType critical_type);
	void SetCheckTraceTypeCallback(std::function<std::shared_ptr<EBTraceInfo>(const std::string &remark)> fnc)
	{ m_check_fnc = fnc; };


private:
	std::function<void(const std::string &)> m_type_fnc[MessageType::em_type_count] = {nullptr};
	std::function<std::shared_ptr<EBTraceInfo>(const std::string &)> m_check_fnc;
};
}

#endif //EBTRACEMANAGER_H
