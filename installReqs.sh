#!/usr/bin/env bash

function checkUbuntuFocal() {
    [ "$(lsb_release -cs)" != "focal" ] && echo "This machine is not Ubuntu Focal" && return 1
    return 0
}

function basicAptPackages() {
    sudo apt update -y &&
        sudo apt upgrade -y &&
        sudo apt install -y curl wget git vim
}

function ensureNoetic() {
    # http://wiki.ros.org/ROS/Installation/TwoLineInstall/
    # Checks if setup.bash exists. If not, downloads and runs the install script.
    # NOTE: Machine can have multiple ROS versions installed.
    [ ! -e /opt/ros/noetic/setup.bash ] &&
        wget -c https://raw.githubusercontent.com/qboticslabs/ros_install_noetic/master/ros_install_noetic.sh &&
        chmod +x ./ros_install_noetic.sh &&
        ./ros_install_noetic.sh
}

function installTurtleBotPackages() {
    # https://emanual.robotis.com/docs/en/platform/turtlebot3/quick-start/
    ROS_APT_PACKAGES=(
        ros-noetic-joy
        ros-noetic-teleop-twist-joy
        ros-noetic-teleop-twist-keyboard
        ros-noetic-laser-proc
        ros-noetic-rgbd-launch
        ros-noetic-rosserial-arduino
        ros-noetic-rosserial-python
        ros-noetic-rosserial-client
        ros-noetic-rosserial-msgs
        ros-noetic-amcl
        ros-noetic-map-server
        ros-noetic-move-base
        ros-noetic-urdf
        ros-noetic-xacro
        ros-noetic-compressed-image-transport
        ros-noetic-rqt*
        ros-noetic-rviz
        ros-noetic-gmapping
        ros-noetic-navigation
        ros-noetic-interactive-markers
        ros-noetic-dynamixel-sdk
        ros-noetic-turtlebot3-msgs
        ros-noetic-turtlebot3
    )
    sudo apt install -y "${ROS_APT_PACKAGES[@]}"
}
function install_tuw_multi_robot_deps() {
    # https://github.com/tuw-robotics/tuw_multi_robot/blob/master/INSTALL.md
    export ROS_VERSION=noetic
    sudo apt install "ros-${ROS_VERSION}-map-server"
    sudo apt install "ros-${ROS_VERSION}-stage-ros"
}

checkUbuntuFocal || exit 1
basicAptPackages
ensureNoetic
installTurtleBotPackages
install_tuw_multi_robot_deps
