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
	int trace_type = 0;
	int debug_type = 0;
	int info_type = 0;
	int warn_type = 0;
	int error_type = 0;
	int critical_type = 0;
};

class EBTraceManager
{
public:
	std::shared_ptr<EBTraceInstance> CreateTraceInstance(const std::string& remark);
	bool SetCheckTraceTypeCallback(int type,std::function<void(const std::string &)> fnc);
	void SetDefaultCheckTraceTypeCallback(std::function<std::shared_ptr<EBTraceInfo>(const std::string &remark)> fnc)
	{ m_check_fnc = fnc; };
private:
	std::shared_ptr<EBTraceInstance> CreateTraceInstance(const std::string &remark,
	                                                     int trace_type,
	                                                     int debug_type,
	                                                     int info_type,
	                                                     int warn_type,
	                                                     int error_type,
	                                                     int critical_type);


private:
	std::function<void(const std::string &)> m_type_fnc[MessageType::em_type_count] = {nullptr};
	std::function<std::shared_ptr<EBTraceInfo>(const std::string &)> m_check_fnc;
};
}

#endif //EBTRACEMANAGER_H
