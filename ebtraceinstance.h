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
	int GetTraceType() const;
	void SetTraceType(int trace_type);
	const std::function<void(const std::string &)> &GetTraceFnc() const;
	void SetTraceFnc(const std::function<void(const std::string &)> &trace_fnc);
	int GetDebugType() const;
	void SetDebugType(int debug_type);
	const std::function<void(const std::string &)> &GetDebugFnc() const;
	void SetDebugFnc(const std::function<void(const std::string &)> &debug_fnc);
	int GetInfoType() const;
	void SetInfoType(int info_type);
	const std::function<void(const std::string &)> &GetInfoFnc() const;
	void SetInfoFnc(const std::function<void(const std::string &)> &info_fnc);
	int GetWarnType() const;
	void SetWarnType(int warn_type);
	const std::function<void(const std::string &)> &GetWarnFnc() const;
	void SetWarnFnc(const std::function<void(const std::string &)> &warn_fnc);
	int GetErrorType() const;
	void SetErrorType(int error_type);
	const std::function<void(const std::string &)> &GetErrorFnc() const;
	void SetErrorFnc(const std::function<void(const std::string &)> &error_fnc);
	int GetCricitalType() const;
	void SetCricitalType(int cricital_type);
	const std::function<void(const std::string &)> &GetCriticalFnc() const;
	void SetCriticalFnc(const std::function<void(const std::string &)> &critical_fnc);;

private:
	inline void CallFnc(std::function<void(const std::string &)> fnc, const std::string &message);
	int m_trace_type;
	std::function<void(const std::string &)> m_trace_fnc;
	int m_debug_type;
	std::function<void(const std::string &)> m_debug_fnc;
	int m_info_type;
	std::function<void(const std::string &)> m_info_fnc;
	int m_warn_type;
	std::function<void(const std::string &)> m_warn_fnc;
	int m_error_type;
	std::function<void(const std::string &)> m_error_fnc;
	int m_cricital_type;
	std::function<void(const std::string &)> m_critical_fnc;
	std::string remark;
};
}

#endif //EBTRACEINSTANCE_H
