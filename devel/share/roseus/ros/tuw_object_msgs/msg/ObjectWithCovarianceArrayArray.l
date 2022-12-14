;; Auto-generated. Do not edit!


(when (boundp 'tuw_object_msgs::ObjectWithCovarianceArrayArray)
  (if (not (find-package "TUW_OBJECT_MSGS"))
    (make-package "TUW_OBJECT_MSGS"))
  (shadow 'ObjectWithCovarianceArrayArray (find-package "TUW_OBJECT_MSGS")))
(unless (find-package "TUW_OBJECT_MSGS::OBJECTWITHCOVARIANCEARRAYARRAY")
  (make-package "TUW_OBJECT_MSGS::OBJECTWITHCOVARIANCEARRAYARRAY"))

(in-package "ROS")
;;//! \htmlinclude ObjectWithCovarianceArrayArray.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass tuw_object_msgs::ObjectWithCovarianceArrayArray
  :super ros::object
  :slots (_header _objects_array ))

(defmethod tuw_object_msgs::ObjectWithCovarianceArrayArray
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:objects_array __objects_array) ())
    )
   (send-super :init)
   (setq _header __header)
   (setq _objects_array __objects_array)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:objects_array
   (&rest __objects_array)
   (if (keywordp (car __objects_array))
       (send* _objects_array __objects_array)
     (progn
       (if __objects_array (setq _objects_array (car __objects_array)))
       _objects_array)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; tuw_object_msgs/ObjectWithCovarianceArray[] _objects_array
    (apply #'+ (send-all _objects_array :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; tuw_object_msgs/ObjectWithCovarianceArray[] _objects_array
     (write-long (length _objects_array) s)
     (dolist (elem _objects_array)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; tuw_object_msgs/ObjectWithCovarianceArray[] _objects_array
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _objects_array (let (r) (dotimes (i n) (push (instance tuw_object_msgs::ObjectWithCovarianceArray :init) r)) r))
     (dolist (elem- _objects_array)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get tuw_object_msgs::ObjectWithCovarianceArrayArray :md5sum-) "d39ee51d9b4b69d4a984a8320f91efa8")
(setf (get tuw_object_msgs::ObjectWithCovarianceArrayArray :datatype-) "tuw_object_msgs/ObjectWithCovarianceArrayArray")
(setf (get tuw_object_msgs::ObjectWithCovarianceArrayArray :definition-)
      "# An object with covariance in a reference coordinate frame with timestamp
Header header
ObjectWithCovarianceArray[] objects_array

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: tuw_object_msgs/ObjectWithCovarianceArray
# An object with covariance in a reference coordinate frame with timestamp
Header header
ObjectWithCovariance[] objects

================================================================================
MSG: tuw_object_msgs/ObjectWithCovariance
# This expresses a object in free space with uncertainty.

Object object

# Row-major representation of the 6x6 covariance matrix
# The orientation parameters use a fixed-axis representation.
# In order, the parameters are:
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)

float64[] covariance_pose   # pose covariance if it exists it will be 3x3 or 6x6
float64[] covariance_twist  # twist covariance if it exists it will be 3x3 or 6x6
float64[] correlation       # correlation between pose and twist if it exists it will be 3x3 or 6x6
================================================================================
MSG: tuw_object_msgs/Object
# This expresses a object in a 3D space
int32[] ids                  # possible ids of the detected object (empty if no id could be identified/assigned)
int32   shape                # shape type (possible types are listed below)
float64[] shape_variables    # variables correspoding to the shape of the object (possible types are listed below)
float64[] ids_confidence     # confidence of the possible ids in [0, 1]
geometry_msgs/Pose pose      # pose of the detected object
geometry_msgs/Twist twist    # twist of the detected object

# SHAPE_TYPE                      # SHAPE_VARIABLES
# ====================================================
int32 SHAPE_UNKOWN           = 0  # []
int32 SHAPE_POINT            = 1  # []
int32 SHAPE_CIRCLE           = 2  # [radius]
int32 SHAPE_ELLIPSE          = 3  # [radius1, radius2]
int32 SHAPE_SQUARE           = 4  # [width]
int32 SHAPE_RECTANGLE        = 5  # [length, width]
int32 SHAPE_HULL             = 6  # [p0, p1, p2, ...]
int32 SHAPE_LINE             = 7  # [] or [length] 

int32 SHAPE_SPHERE           = 102
int32 SHAPE_ELLIPSOID        = 103
int32 SHAPE_CUBE             = 104
int32 SHAPE_BOX              = 105
int32 SHAPE_MESH             = 106

int32 SHAPE_TRAFFIC_CONE     = 201 # [radius, color(1 = blue, 2 = yellow, 3 = red)] 
int32 SHAPE_DOOR             = 202 # [width, height, opening angle (0=closed), nr of door leafs, clockwise (0) counterclockwise (1)]
int32 SHAPE_MAP_DOOR         = 212 # for doors already mapped, same parameters as usual door
int32 SHAPE_PERSON           = 203
int32 SHAPE_VEHICLE          = 204
int32 SHAPE_FIDUCIAL         = 205
int32 SHAPE_CONE             = 206 # [radius, height]

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
")



(provide :tuw_object_msgs/ObjectWithCovarianceArrayArray "d39ee51d9b4b69d4a984a8320f91efa8")


