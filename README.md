# CS685_Final_Project

```bash
# You can change the path to be anything you want.
WS_PATH="${HOME}/final_project"

# Clone project and submodules into workspace
git clone --recursive -b master https://github.com/FlavioAmurrioCS/CS685_Final_Project.git "${WS_PATH}"

# Will:
# - Check script is running on Ubuntu focal
# - Check Basic APT packages are installed: curl git wget
# - ROS Noetic(if not found)
# - TurtleBot packages are installed
# - Install tuw_multi_robot deps
"${WS_PATH}/installReqs.sh"

# Install python dep
sudo apt install python3-scipy

# Initial Build
cd "${WS_PATH}"
source /opt/ros/noetic/setup.bash
source devel/setup.bash
catkin_make
source devel/setup.bash # Might need to be resource after build


# TERMINAL 1
export TURTLEBOT3_MODEL=burger
WS_PATH="${HOME}/final_project"
cd "${WS_PATH}"
source /opt/ros/noetic/setup.bash
source devel/setup.bash


# TERMINAL 2
export TURTLEBOT3_MODEL=burger
WS_PATH="${HOME}/final_project"
cd "${WS_PATH}"
source /opt/ros/noetic/setup.bash
source devel/setup.bash


```