/* DO NOT EDIT: automatically built by dist/stat.py. */

#include "wt_internal.h"

int
__wt_stat_alloc_btree_stats(WT_SESSION_IMPL *session, WT_BTREE_STATS **statsp)
{
	WT_BTREE_STATS *stats;

	WT_RET(__wt_calloc_def(session, 1, &stats));

	stats->alloc.name = "alloc";
	stats->alloc.desc = "file: block allocations";
	stats->extend.name = "extend";
	stats->extend.desc = "file: block allocations require file extension";
	stats->file_allocsize.name = "file_allocsize";
	stats->file_allocsize.desc = "page size allocation unit";
	stats->file_col_fix.name = "file_col_fix";
	stats->file_col_fix.desc = "column-store fixed-size leaf pages";
	stats->file_col_internal.name = "file_col_internal";
	stats->file_col_internal.desc = "column-store internal pages";
	stats->file_col_variable.name = "file_col_variable";
	stats->file_col_variable.desc =
	    "column-store variable-size leaf pages";
	stats->file_fixed_len.name = "file_fixed_len";
	stats->file_fixed_len.desc = "fixed-record size";
	stats->file_freelist_entries.name = "file_freelist_entries";
	stats->file_freelist_entries.desc =
	    "number of entries in the freelist";
	stats->file_intlmax.name = "file_intlmax";
	stats->file_intlmax.desc = "maximum internal page size";
	stats->file_intlmin.name = "file_intlmin";
	stats->file_intlmin.desc = "minimum internal page size";
	stats->file_item_col_deleted.name = "file_item_col_deleted";
	stats->file_item_col_deleted.desc = "column-store deleted value";
	stats->file_item_total_key.name = "file_item_total_key";
	stats->file_item_total_key.desc = "total keys";
	stats->file_item_total_value.name = "file_item_total_value";
	stats->file_item_total_value.desc = "total value items";
	stats->file_leafmax.name = "file_leafmax";
	stats->file_leafmax.desc = "maximum leaf page size";
	stats->file_leafmin.name = "file_leafmin";
	stats->file_leafmin.desc = "minimum leaf page size";
	stats->file_magic.name = "file_magic";
	stats->file_magic.desc = "magic number";
	stats->file_major.name = "file_major";
	stats->file_major.desc = "major version number";
	stats->file_minor.name = "file_minor";
	stats->file_minor.desc = "minor version number";
	stats->file_overflow.name = "file_overflow";
	stats->file_overflow.desc = "overflow pages";
	stats->file_row_internal.name = "file_row_internal";
	stats->file_row_internal.desc = "row-store internal pages";
	stats->file_row_leaf.name = "file_row_leaf";
	stats->file_row_leaf.desc = "row-store leaf pages";
	stats->free.name = "free";
	stats->free.desc = "file: block frees";
	stats->items_inserted.name = "items_inserted";
	stats->items_inserted.desc = "file: key/value pairs inserted";
	stats->overflow_read.name = "overflow_read";
	stats->overflow_read.desc = "file: overflow pages read from the file";
	stats->page_read.name = "page_read";
	stats->page_read.desc = "file: pages read from a file";
	stats->page_write.name = "page_write";
	stats->page_write.desc = "file: pages written to a file";
	stats->rec_hazard.name = "rec_hazard";
	stats->rec_hazard.desc =
	    "reconcile: unable to acquire hazard reference";
	stats->rec_ovfl_key.name = "rec_ovfl_key";
	stats->rec_ovfl_key.desc = "reconcile: overflow key";
	stats->rec_ovfl_value.name = "rec_ovfl_value";
	stats->rec_ovfl_value.desc = "reconcile: overflow value";
	stats->rec_page_delete.name = "rec_page_delete";
	stats->rec_page_delete.desc = "reconcile: pages deleted";
	stats->rec_page_merge.name = "rec_page_merge";
	stats->rec_page_merge.desc =
	    "reconcile: deleted or temporary pages merged";
	stats->rec_split_intl.name = "rec_split_intl";
	stats->rec_split_intl.desc = "reconcile: internal pages split";
	stats->rec_split_leaf.name = "rec_split_leaf";
	stats->rec_split_leaf.desc = "reconcile: leaf pages split";

	*statsp = stats;
	return (0);
}

void
__wt_stat_clear_btree_stats(WT_STATS *stats_arg)
{
	WT_BTREE_STATS *stats;

	stats = (WT_BTREE_STATS *)stats_arg;
	stats->alloc.v = 0;
	stats->extend.v = 0;
	stats->file_allocsize.v = 0;
	stats->file_col_fix.v = 0;
	stats->file_col_internal.v = 0;
	stats->file_col_variable.v = 0;
	stats->file_fixed_len.v = 0;
	stats->file_freelist_entries.v = 0;
	stats->file_intlmax.v = 0;
	stats->file_intlmin.v = 0;
	stats->file_item_col_deleted.v = 0;
	stats->file_item_total_key.v = 0;
	stats->file_item_total_value.v = 0;
	stats->file_leafmax.v = 0;
	stats->file_leafmin.v = 0;
	stats->file_magic.v = 0;
	stats->file_major.v = 0;
	stats->file_minor.v = 0;
	stats->file_overflow.v = 0;
	stats->file_row_internal.v = 0;
	stats->file_row_leaf.v = 0;
	stats->free.v = 0;
	stats->items_inserted.v = 0;
	stats->overflow_read.v = 0;
	stats->page_read.v = 0;
	stats->page_write.v = 0;
	stats->rec_hazard.v = 0;
	stats->rec_ovfl_key.v = 0;
	stats->rec_ovfl_value.v = 0;
	stats->rec_page_delete.v = 0;
	stats->rec_page_merge.v = 0;
	stats->rec_split_intl.v = 0;
	stats->rec_split_leaf.v = 0;
}

int
__wt_stat_alloc_conn_stats(WT_SESSION_IMPL *session, WT_CONN_STATS **statsp)
{
	WT_CONN_STATS *stats;

	WT_RET(__wt_calloc_def(session, 1, &stats));

	stats->cache_bytes_inuse.name = "cache_bytes_inuse";
	stats->cache_bytes_inuse.desc =
	    "cache: bytes currently held in the cache";
	stats->cache_bytes_max.name = "cache_bytes_max";
	stats->cache_bytes_max.desc = "cache: maximum bytes configured";
	stats->cache_evict_hazard.name = "cache_evict_hazard";
	stats->cache_evict_hazard.desc =
	    "cache: pages selected for eviction not evicted because of a hazard reference";
	stats->cache_evict_modified.name = "cache_evict_modified";
	stats->cache_evict_modified.desc =
	    "cache: modified pages selected for eviction";
	stats->cache_evict_slow.name = "cache_evict_slow";
	stats->cache_evict_slow.desc =
	    "cache: eviction server unable to reach eviction goal";
	stats->cache_evict_unmodified.name = "cache_evict_unmodified";
	stats->cache_evict_unmodified.desc =
	    "cache: unmodified pages selected for eviction";
	stats->cache_overflow_read.name = "cache_overflow_read";
	stats->cache_overflow_read.desc =
	    "cache: overflow pages read from the file";
	stats->cache_page_read.name = "cache_page_read";
	stats->cache_page_read.desc = "cache: pages read from a file";
	stats->cache_page_write.name = "cache_page_write";
	stats->cache_page_write.desc = "cache: pages written to a file";
	stats->cache_pages_inuse.name = "cache_pages_inuse";
	stats->cache_pages_inuse.desc =
	    "cache: pages currently held in the cache";
	stats->file_open.name = "file_open";
	stats->file_open.desc = "files currently open";
	stats->memalloc.name = "memalloc";
	stats->memalloc.desc = "total memory allocations";
	stats->memfree.name = "memfree";
	stats->memfree.desc = "total memory frees";
	stats->mtx_lock.name = "mtx_lock";
	stats->mtx_lock.desc = "mutex lock calls";
	stats->total_read_io.name = "total_read_io";
	stats->total_read_io.desc = "total read I/Os";
	stats->total_write_io.name = "total_write_io";
	stats->total_write_io.desc = "total write I/Os";
	stats->workq_passes.name = "workq_passes";
	stats->workq_passes.desc = "workQ queue passes";
	stats->workq_yield.name = "workq_yield";
	stats->workq_yield.desc = "workQ yields";

	*statsp = stats;
	return (0);
}

void
__wt_stat_clear_conn_stats(WT_STATS *stats_arg)
{
	WT_CONN_STATS *stats;

	stats = (WT_CONN_STATS *)stats_arg;
	stats->cache_evict_hazard.v = 0;
	stats->cache_evict_modified.v = 0;
	stats->cache_evict_slow.v = 0;
	stats->cache_evict_unmodified.v = 0;
	stats->cache_overflow_read.v = 0;
	stats->cache_page_read.v = 0;
	stats->cache_page_write.v = 0;
	stats->file_open.v = 0;
	stats->memalloc.v = 0;
	stats->memfree.v = 0;
	stats->mtx_lock.v = 0;
	stats->total_read_io.v = 0;
	stats->total_write_io.v = 0;
	stats->workq_passes.v = 0;
	stats->workq_yield.v = 0;
}
