#pragma once


enum class mi_memory_order_e:int
{
	mi_memory_order_relaxed = 0x0,
	mi_memory_order_consume = 0x1,
	mi_memory_order_acquire = 0x2,
	mi_memory_order_release = 0x3,
	mi_memory_order_acq_rel = 0x4,
	mi_memory_order_seq_cst = 0x5
};