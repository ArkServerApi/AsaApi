#pragma once


enum class mi_option_e:int
{
	mi_option_show_errors = 0x0,
	mi_option_show_stats = 0x1,
	mi_option_verbose = 0x2,
	mi_option_eager_commit = 0x3,
	mi_option_eager_region_commit = 0x4,
	mi_option_reset_decommits = 0x5,
	mi_option_large_os_pages = 0x6,
	mi_option_reserve_huge_os_pages = 0x7,
	mi_option_reserve_os_memory = 0x8,
	mi_option_segment_cache = 0x9,
	mi_option_page_reset = 0xA,
	mi_option_abandoned_page_reset = 0xB,
	mi_option_segment_reset = 0xC,
	mi_option_eager_commit_delay = 0xD,
	mi_option_allow_decommit = 0xE,
	mi_option_reset_delay = 0xF,
	mi_option_segment_decommit_delay = 0x10,
	mi_option_use_numa_nodes = 0x11,
	mi_option_limit_os_alloc = 0x12,
	mi_option_os_tag = 0x13,
	mi_option_max_errors = 0x14,
	mi_option_max_warnings = 0x15,
	_mi_option_last = 0x16
};