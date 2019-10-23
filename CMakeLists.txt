set (src "mongoose/mongoose.c" "mongoose_util.c")
set(include_dirs "mongoose")
set(requires "openssl")

idf_component_register(SRCS "${src}" 
                       INCLUDE_DIRS "${include_dirs}"
                       REQUIRES "${requires}")

target_compile_definitions(${COMPONENT_TARGET} PUBLIC 
                           -DCS_PLATFORM=15 # ESP32 platform
                           -DMG_SSL_IF=2 # Use mbedtls directly
                           -DMG_ENABLE_SSL=1
                           -DMG_ENABLE_MQTT=0
                           -DMG_ENABLE_HTTP=1
                           -DMG_ENABLE_HTTP_WEBSOCKET=1
                           -DMG_ENABLE_HTTP_STREAMING_MULTIPART=1)