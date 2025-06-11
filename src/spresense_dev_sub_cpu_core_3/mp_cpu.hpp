/**
 * @file mp_cpu.hpp
 * @author Chimipupu(https://github.com/Chimipupu)
 * @date 2025-06-12
 * @version 1.0
 * @note SPRESENSE サブCPUコア3用
 */

#ifndef MP_CPU_HPP
#define MP_CPU_HPP

#include <MP.h> // MultiCore MPライブラリ
#ifndef SUBCORE
#error "You must select SubCore"
#endif

#define MP_SUB_CPU_CORE_1    1 // Sub CPU Core 1
#define MP_SUB_CPU_CORE_2    2 // Sub CPU Core 2
#define MP_SUB_CPU_CORE_3    3 // Sub CPU Core 3
#define MP_SUB_CPU_CORE_4    4 // Sub CPU Core 4
#define MP_SUB_CPU_CORE_5    5 // Sub CPU Core 5

void mp_sub_cpu_core_begin_res(void);

#endif // MP_CPU_HPP