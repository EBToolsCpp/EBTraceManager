//
// Created by erban on 2021/4/28.
//

#ifndef EBTRACEINSTANCE_H
#define EBTRACEINSTANCE_H


#include <string>
#include <functional>
#include "utility.h"
namespace erban
{
class EBTraceInstance
{
public:
	void Trace(const std::string &message);;
	void Debug(const std::string &message);;
	void Info(const std::string &message);;
	void Warn(const std::string &message);;
	void Error(const std::string &message);;
	void Critical(const std::string &message);
	const std::string &GetRemark() const;
	void SetRemark(const std::string &remark);
	MessageType GetTraceType() const;
	void SetTraceType(MessageType trace_type);
	const std::function<void(const std::string &)> &GetTraceFnc() const;
	void SetTraceFnc(const std::function<void(const std::string &)> &trace_fnc);
	MessageType GetDebugType() const;
	void SetDebugType(MessageType debug_type);
	const std::function<void(const std::string &)> &GetDebugFnc() const;
	void SetDebugFnc(const std::function<void(const std::string &)> &debug_fnc);
	MessageType GetInfoType() const;
	void SetInfoType(MessageType info_type);
	const std::function<void(const std::string &)> &GetInfoFnc() const;
	void SetInfoFnc(const std::function<void(const std::string &)> &info_fnc);
	MessageType GetWarnType() const;
	void SetWarnType(MessageType warn_type);
	const std::function<void(const std::string &)> &GetWarnFnc() const;
	void SetWarnFnc(const std::function<void(const std::string &)> &warn_fnc);
	MessageType GetErrorType() const;
	void SetErrorType(MessageType error_type);
	const std::function<void(const std::string &)> &GetErrorFnc() const;
	void SetErrorFnc(const std::function<void(const std::string &)> &error_fnc);
	MessageType GetCricitalType() const;
	void SetCricitalType(MessageType cricital_type);
	const std::function<void(const std::string &)> &GetCriticalFnc() const;
	void SetCriticalFnc(const std::function<void(const std::string &)> &critical_fnc);;

private:
	inline void CallFnc(std::function<void(const std::string &)> fnc, const std::string &message);
	MessageType m_trace_type;
	std::function<void(const std::string &)> m_trace_fnc;
	MessageType m_debug_type;
	std::function<void(const std::string &)> m_debug_fnc;
	MessageType m_info_type;
	std::function<void(const std::string &)> m_info_fnc;
	MessageType m_warn_type;
	std::function<void(const std::string &)> m_warn_fnc;
	MessageType m_error_type;
	std::function<void(const std::string &)> m_error_fnc;
	MessageType m_cricital_type;
	std::function<void(const std::string &)> m_critical_fnc;
	std::string remark;
};
}

#endif //EBTRACEINSTANCE_H
