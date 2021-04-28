//
// Created by erban on 2021/4/28.
//

#ifndef UTILITY_H
#define UTILITY_H


namespace erban
{
enum MessageLevel
{
	em_level_debug,
	em_level_info,
	em_level_trace,
	em_level_warn,
	em_level_error,
	em_level_critical,
};

enum MessageType
{
	em_type_console = 0,
	em_type_log,
	em_type_tcp,
	em_type_count
};


}


#endif //UTILITY_H
