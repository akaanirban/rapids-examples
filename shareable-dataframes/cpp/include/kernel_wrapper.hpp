#pragma once

#include <string>
#include "kernel.cuh"
#include <assert.h>
#include <cstdio>

class CudfWrapper {
  cudf::mutable_table_view mtv;

  public:
    // Creates a Wrapper around an existing cuDF Dataframe object
    CudfWrapper(cudf::mutable_table_view table_view);

    ~CudfWrapper();

    void tenth_mm_to_inches(int column_index);
};
