//
// Created by erban on 2021/4/28.
//

#include "ebtraceinstance.h"
void erban::EBTraceInstance::Trace(const std::string &message)
{ CallFnc(m_trace_fnc, message); }
void erban::EBTraceInstance::Debug(const std::string &message)
{ CallFnc(m_debug_fnc, message); }
void erban::EBTraceInstance::Info(const std::string &message)
{ CallFnc(m_info_fnc, message); }
void erban::EBTraceInstance::Warn(const std::string &message)
{ CallFnc(m_warn_fnc, message); }
void erban::EBTraceInstance::Error(const std::string &message)
{ CallFnc(m_error_fnc, message); }
void erban::EBTraceInstance::Critical(const std::string &message)
{ CallFnc(m_critical_fnc, message); }
const std::string &erban::EBTraceInstance::GetRemark() const
{
	return remark;
}
void erban::EBTraceInstance::SetRemark(const std::string &remark)
{
	EBTraceInstance::remark = remark;
}
void erban::EBTraceInstance::CallFnc(std::function<void(const std::string &)> fnc, const std::string &message)
{ if (fnc)fnc(message); }
erban::MessageType erban::EBTraceInstance::GetTraceType() const
{
	return m_trace_type;
}
void erban::EBTraceInstance::SetTraceType(erban::MessageType trace_type)
{
	m_trace_type = trace_type;
}
const std::function<void(const std::string &)> &erban::EBTraceInstance::GetTraceFnc() const
{
	return m_trace_fnc;
}
void erban::EBTraceInstance::SetTraceFnc(const std::function<void(const std::string &)> &trace_fnc)
{
	m_trace_fnc = trace_fnc;
}
erban::MessageType erban::EBTraceInstance::GetDebugType() const
{
	return m_debug_type;
}
void erban::EBTraceInstance::SetDebugType(erban::MessageType debug_type)
{
	m_debug_type = debug_type;
}
const std::function<void(const std::string &)> &erban::EBTraceInstance::GetDebugFnc() const
{
	return m_debug_fnc;
}
void erban::EBTraceInstance::SetDebugFnc(const std::function<void(const std::string &)> &debug_fnc)
{
	m_debug_fnc = debug_fnc;
}
erban::MessageType erban::EBTraceInstance::GetInfoType() const
{
	return m_info_type;
}
void erban::EBTraceInstance::SetInfoType(erban::MessageType info_type)
{
	m_info_type = info_type;
}
const std::function<void(const std::string &)> &erban::EBTraceInstance::GetInfoFnc() const
{
	return m_info_fnc;
}
void erban::EBTraceInstance::SetInfoFnc(const std::function<void(const std::string &)> &info_fnc)
{
	m_info_fnc = info_fnc;
}
erban::MessageType erban::EBTraceInstance::GetWarnType() const
{
	return m_warn_type;
}
void erban::EBTraceInstance::SetWarnType(erban::MessageType warn_type)
{
	m_warn_type = warn_type;
}
const std::function<void(const std::string &)> &erban::EBTraceInstance::GetWarnFnc() const
{
	return m_warn_fnc;
}
void erban::EBTraceInstance::SetWarnFnc(const std::function<void(const std::string &)> &warn_fnc)
{
	m_warn_fnc = warn_fnc;
}
erban::MessageType erban::EBTraceInstance::GetErrorType() const
{
	return m_error_type;
}
void erban::EBTraceInstance::SetErrorType(erban::MessageType error_type)
{
	m_error_type = error_type;
}
const std::function<void(const std::string &)> &erban::EBTraceInstance::GetErrorFnc() const
{
	return m_error_fnc;
}
void erban::EBTraceInstance::SetErrorFnc(const std::function<void(const std::string &)> &error_fnc)
{
	m_error_fnc = error_fnc;
}
erban::MessageType erban::EBTraceInstance::GetCricitalType() const
{
	return m_cricital_type;
}
void erban::EBTraceInstance::SetCricitalType(erban::MessageType cricital_type)
{
	m_cricital_type = cricital_type;
}
const std::function<void(const std::string &)> &erban::EBTraceInstance::GetCriticalFnc() const
{
	return m_critical_fnc;
}
void erban::EBTraceInstance::SetCriticalFnc(const std::function<void(const std::string &)> &critical_fnc)
{
	m_critical_fnc = critical_fnc;
}
