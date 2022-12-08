# CS685_Final_Project

```bash
WS_PATH=${HOME}/final_project

git clone https://github.com/FlavioAmurrioCS/CS685_Final_Project.git --recursive

"${WS_PATH}/installReqs.sh"
sudo apt install python3-scipy

source /opt/ros/noetic/setup.bash
mkdir -p ${WS_PATH}/src
cd ${WS_PATH}/
catkin_make
source devel/setup.bash


# TERMINAL 1
export TURTLEBOT3_MODEL=burger

# TERMINAL 2


```