#include "compiler.h"
int compiler_file(const char *filename, const char *out_filename, int flags)
{
    struct compile_process *process = compile_process_create(filename, out_filename, flags);
    if (!process)
    {
        /* code */
        return COMPILES_FAILED_WITH_RRRORS;
    }

    return COMPILES_FILE_COMPILED_OK;
}