# Install script for directory: /home/jason/ROSlearning/ros-advance-practice/Action_ws/src/action_exp

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/jason/ROSlearning/ros-advance-practice/Action_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/action_exp/action" TYPE FILE FILES "/home/jason/ROSlearning/ros-advance-practice/Action_ws/src/action_exp/action/Add.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/action_exp/msg" TYPE FILE FILES
    "/home/jason/ROSlearning/ros-advance-practice/Action_ws/devel/share/action_exp/msg/AddAction.msg"
    "/home/jason/ROSlearning/ros-advance-practice/Action_ws/devel/share/action_exp/msg/AddActionGoal.msg"
    "/home/jason/ROSlearning/ros-advance-practice/Action_ws/devel/share/action_exp/msg/AddActionResult.msg"
    "/home/jason/ROSlearning/ros-advance-practice/Action_ws/devel/share/action_exp/msg/AddActionFeedback.msg"
    "/home/jason/ROSlearning/ros-advance-practice/Action_ws/devel/share/action_exp/msg/AddGoal.msg"
    "/home/jason/ROSlearning/ros-advance-practice/Action_ws/devel/share/action_exp/msg/AddResult.msg"
    "/home/jason/ROSlearning/ros-advance-practice/Action_ws/devel/share/action_exp/msg/AddFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/action_exp/cmake" TYPE FILE FILES "/home/jason/ROSlearning/ros-advance-practice/Action_ws/build/action_exp/catkin_generated/installspace/action_exp-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/jason/ROSlearning/ros-advance-practice/Action_ws/devel/include/action_exp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/jason/ROSlearning/ros-advance-practice/Action_ws/devel/share/roseus/ros/action_exp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/jason/ROSlearning/ros-advance-practice/Action_ws/devel/share/common-lisp/ros/action_exp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/jason/ROSlearning/ros-advance-practice/Action_ws/devel/share/gennodejs/ros/action_exp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/jason/ROSlearning/ros-advance-practice/Action_ws/devel/lib/python3/dist-packages/action_exp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/jason/ROSlearning/ros-advance-practice/Action_ws/devel/lib/python3/dist-packages/action_exp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/jason/ROSlearning/ros-advance-practice/Action_ws/build/action_exp/catkin_generated/installspace/action_exp.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/action_exp/cmake" TYPE FILE FILES "/home/jason/ROSlearning/ros-advance-practice/Action_ws/build/action_exp/catkin_generated/installspace/action_exp-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/action_exp/cmake" TYPE FILE FILES
    "/home/jason/ROSlearning/ros-advance-practice/Action_ws/build/action_exp/catkin_generated/installspace/action_expConfig.cmake"
    "/home/jason/ROSlearning/ros-advance-practice/Action_ws/build/action_exp/catkin_generated/installspace/action_expConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/action_exp" TYPE FILE FILES "/home/jason/ROSlearning/ros-advance-practice/Action_ws/src/action_exp/package.xml")
endif()

