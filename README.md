# CS685_Final_Project

```bash
WS_PATH=${HOME}/final_project

git clone --recursive -b master https://github.com/FlavioAmurrioCS/CS685_Final_Project.git ${WS_PATH}

"${WS_PATH}/installReqs.sh"
sudo apt install python3-scipy

cd ${WS_PATH}/
source /opt/ros/noetic/setup.bash
source devel/setup.bash
catkin_make


# TERMINAL 1
export TURTLEBOT3_MODEL=burger

# TERMINAL 2


```