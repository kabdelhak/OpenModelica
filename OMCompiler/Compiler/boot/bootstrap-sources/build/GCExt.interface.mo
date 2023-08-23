encapsulated package GCExt
  function gcollect end gcollect;

  function gcollectAndUnmap end gcollectAndUnmap;

  function enable end enable;

  function disable end disable;

  function free
    final type T = polymorphic<Any>;
    input T data;
  end free;

  function expandHeap
    input Real sz;
    output Boolean success;
  end expandHeap;

  function setFreeSpaceDivisor
    input Integer divisor = 3;
  end setFreeSpaceDivisor;

  function getForceUnmapOnGcollect
    output Boolean res;
  end getForceUnmapOnGcollect;

  function setForceUnmapOnGcollect
    input Boolean forceUnmap;
  end setForceUnmapOnGcollect;

  function setMaxHeapSize
    input Real sz;
  end setMaxHeapSize;

  uniontype ProfStats
    record PROFSTATS
      Integer heapsize_full;
      Integer free_bytes_full;
      Integer unmapped_bytes;
      Integer bytes_allocd_since_gc;
      Integer allocd_bytes_before_gc;
      Integer non_gc_bytes;
      Integer gc_no;
      Integer markers_m1;
      Integer bytes_reclaimed_since_gc;
      Integer reclaimed_bytes_before_gc;
    end PROFSTATS;
  end ProfStats;

  function profStatsStr
    input ProfStats stats;
    input String head = "GC Profiling Stats: ";
    input String delimiter = "\n  ";
    output String str;
  end profStatsStr;

  function getProfStats
    output ProfStats stats;
  end getProfStats;
  annotation(__OpenModelica_Interface = "util");
end GCExt;
