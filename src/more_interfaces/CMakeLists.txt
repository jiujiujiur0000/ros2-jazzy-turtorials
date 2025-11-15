cmake_minimum_required(VERSION 3.8)
project(more_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 1. 查找依赖（顺序无关，但建议先找基础依赖）
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)  # 接口生成工具包
find_package(rclcpp REQUIRED)                    # 节点依赖

# 2. 定义接口文件列表（与原逻辑一致）
set(msg_files
  "msg/AddressBook.msg"
)

# 3. 先调用接口生成宏（核心修正：用 rosidl_generate_interfaces，而非 rosidl_default_generators）
rosidl_generate_interfaces(
  ${PROJECT_NAME}                # 目标名称（与功能包名一致）
  ${msg_files}                   # 接口文件列表（可直接传入变量）
)

# 4. 再编译节点（依赖已生成的接口代码）
add_executable(publish_address_book src/publish_address_book.cpp)
# 关键：将接口包 ${PROJECT_NAME} 作为依赖，自动链接类型支持库
ament_target_dependencies(
  publish_address_book
  rclcpp
)

# 5. 安装节点（与原逻辑一致）
install(TARGETS
  publish_address_book
  DESTINATION lib/${PROJECT_NAME}
)

rosidl_get_typesupport_target(cpp_typesupport_target
  ${PROJECT_NAME} rosidl_typesupport_cpp)

target_link_libraries(publish_address_book "${cpp_typesupport_target}")

# # 6. 安装接口文件（可选，但建议添加，供其他包引用）
# install(
#   DIRECTORY msg
#   DESTINATION share/${PROJECT_NAME}/
# )

# 7. 导出接口依赖（供其他包依赖时使用）
ament_export_dependencies(rosidl_default_runtime)

# 测试配置（与原逻辑一致）
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()