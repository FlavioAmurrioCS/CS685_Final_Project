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
# If you get an error you may need to increase RAM. (I went from 4GB to 8GB)

source devel/setup.bash # Might need to be resource after build


# TERMINAL 1
export TURTLEBOT3_MODEL=burger
WS_PATH="${HOME}/final_project"
cd "${WS_PATH}"
source /opt/ros/noetic/setup.bash
source devel/setup.bash

roslaunch voronoi world.launch
# IF you see: RLException: multiple files named [world.launch] in package [voronoi]:
# Delete other packages/files and re run command

# In RVIZ:
# - Click add on bottom left section
# - Under "By display type" select VoronoiGraph
# - Click Ok on bottom left
# - On Left Section expand VoronoiGraph section
# - On the Topic row, click on the right it and select /segments and press enter(or click on the emtpy section of the side bar)
# - Nodes will appear in red(Might take a few minutes). Once they turn blue Rviz will be ready


# TERMINAL 2
export TURTLEBOT3_MODEL=burger
WS_PATH="${HOME}/final_project"
cd "${WS_PATH}"
source /opt/ros/noetic/setup.bash
source devel/setup.bash

rosrun voronoi main_find_path.py



# In RViz:
# - Select Publish Point
# - Click anywhere on the map
# - It will take a few moments to calculate the path
# - (You might get a Matplot lib of the planned path. If you do close the matplotlib window)
# - Robot should start moving soon after.





```