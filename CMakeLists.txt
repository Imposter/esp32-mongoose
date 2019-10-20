set (src "mongoose/mongoose.c")
set(include_dirs mongoose)

idf_component_register(SRCS "${src}" 
                       INCLUDE_DIRS "${include_dirs}")