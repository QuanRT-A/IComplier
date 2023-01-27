#ifndef ICOMPILER_H
#define ICOMPILER_H
#include <stdio.h>

enum
{
    COMPILES_FAILED_WITH_RRRORS,
    COMPILES_FILE_COMPILED_OK
};
struct compile_process
{
    /* data */
    // flags是怎么编译的标志
    int flags;

    struct compile_process_input_file
    {
        FILE* fp;
        const char* abs_path;
    }cfile;

    FILE* ofile;
};

int compiler_file(const char *filename, const char *out_filename, int flags);
struct compile_process *compile_process_create(const char *filename, const char *filename_out, int flags);
#endif