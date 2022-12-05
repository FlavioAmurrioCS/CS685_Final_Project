; Auto-generated. Do not edit!


(cl:in-package tuw_object_msgs-msg)


;//! \htmlinclude ObjectWithCovarianceStamped.msg.html

(cl:defclass <ObjectWithCovarianceStamped> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (object
    :reader object
    :initarg :object
    :type tuw_object_msgs-msg:ObjectWithCovariance
    :initform (cl:make-instance 'tuw_object_msgs-msg:ObjectWithCovariance)))
)

(cl:defclass ObjectWithCovarianceStamped (<ObjectWithCovarianceStamped>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ObjectWithCovarianceStamped>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ObjectWithCovarianceStamped)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name tuw_object_msgs-msg:<ObjectWithCovarianceStamped> is deprecated: use tuw_object_msgs-msg:ObjectWithCovarianceStamped instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <ObjectWithCovarianceStamped>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader tuw_object_msgs-msg:header-val is deprecated.  Use tuw_object_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'object-val :lambda-list '(m))
(cl:defmethod object-val ((m <ObjectWithCovarianceStamped>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader tuw_object_msgs-msg:object-val is deprecated.  Use tuw_object_msgs-msg:object instead.")
  (object m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ObjectWithCovarianceStamped>) ostream)
  "Serializes a message object of type '<ObjectWithCovarianceStamped>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'object) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ObjectWithCovarianceStamped>) istream)
  "Deserializes a message object of type '<ObjectWithCovarianceStamped>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'object) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ObjectWithCovarianceStamped>)))
  "Returns string type for a message object of type '<ObjectWithCovarianceStamped>"
  "tuw_object_msgs/ObjectWithCovarianceStamped")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ObjectWithCovarianceStamped)))
  "Returns string type for a message object of type 'ObjectWithCovarianceStamped"
  "tuw_object_msgs/ObjectWithCovarianceStamped")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ObjectWithCovarianceStamped>)))
  "Returns md5sum for a message object of type '<ObjectWithCovarianceStamped>"
  "275c26f1a9ad49ddf779682fc45edf69")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ObjectWithCovarianceStamped)))
  "Returns md5sum for a message object of type 'ObjectWithCovarianceStamped"
  "275c26f1a9ad49ddf779682fc45edf69")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ObjectWithCovarianceStamped>)))
  "Returns full string definition for message of type '<ObjectWithCovarianceStamped>"
  (cl:format cl:nil "# An object with covariance in a reference coordinate frame with timestamp~%Header header~%ObjectWithCovariance object~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: tuw_object_msgs/ObjectWithCovariance~%# This expresses a object in free space with uncertainty.~%~%Object object~%~%# Row-major representation of the 6x6 covariance matrix~%# The orientation parameters use a fixed-axis representation.~%# In order, the parameters are:~%# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)~%~%float64[] covariance_pose   # pose covariance if it exists it will be 3x3 or 6x6~%float64[] covariance_twist  # twist covariance if it exists it will be 3x3 or 6x6~%float64[] correlation       # correlation between pose and twist if it exists it will be 3x3 or 6x6~%================================================================================~%MSG: tuw_object_msgs/Object~%# This expresses a object in a 3D space~%int32[] ids                  # possible ids of the detected object (empty if no id could be identified/assigned)~%int32   shape                # shape type (possible types are listed below)~%float64[] shape_variables    # variables correspoding to the shape of the object (possible types are listed below)~%float64[] ids_confidence     # confidence of the possible ids in [0, 1]~%geometry_msgs/Pose pose      # pose of the detected object~%geometry_msgs/Twist twist    # twist of the detected object~%~%# SHAPE_TYPE                      # SHAPE_VARIABLES~%# ====================================================~%int32 SHAPE_UNKOWN           = 0  # []~%int32 SHAPE_POINT            = 1  # []~%int32 SHAPE_CIRCLE           = 2  # [radius]~%int32 SHAPE_ELLIPSE          = 3  # [radius1, radius2]~%int32 SHAPE_SQUARE           = 4  # [width]~%int32 SHAPE_RECTANGLE        = 5  # [length, width]~%int32 SHAPE_HULL             = 6  # [p0, p1, p2, ...]~%int32 SHAPE_LINE             = 7  # [] or [length] ~%~%int32 SHAPE_SPHERE           = 102~%int32 SHAPE_ELLIPSOID        = 103~%int32 SHAPE_CUBE             = 104~%int32 SHAPE_BOX              = 105~%int32 SHAPE_MESH             = 106~%~%int32 SHAPE_TRAFFIC_CONE     = 201 # [radius, color(1 = blue, 2 = yellow, 3 = red)] ~%int32 SHAPE_DOOR             = 202 # [width, height, opening angle (0=closed), nr of door leafs, clockwise (0) counterclockwise (1)]~%int32 SHAPE_MAP_DOOR         = 212 # for doors already mapped, same parameters as usual door~%int32 SHAPE_PERSON           = 203~%int32 SHAPE_VEHICLE          = 204~%int32 SHAPE_FIDUCIAL         = 205~%int32 SHAPE_CONE             = 206 # [radius, height]~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: geometry_msgs/Twist~%# This expresses velocity in free space broken into its linear and angular parts.~%Vector3  linear~%Vector3  angular~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ObjectWithCovarianceStamped)))
  "Returns full string definition for message of type 'ObjectWithCovarianceStamped"
  (cl:format cl:nil "# An object with covariance in a reference coordinate frame with timestamp~%Header header~%ObjectWithCovariance object~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: tuw_object_msgs/ObjectWithCovariance~%# This expresses a object in free space with uncertainty.~%~%Object object~%~%# Row-major representation of the 6x6 covariance matrix~%# The orientation parameters use a fixed-axis representation.~%# In order, the parameters are:~%# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)~%~%float64[] covariance_pose   # pose covariance if it exists it will be 3x3 or 6x6~%float64[] covariance_twist  # twist covariance if it exists it will be 3x3 or 6x6~%float64[] correlation       # correlation between pose and twist if it exists it will be 3x3 or 6x6~%================================================================================~%MSG: tuw_object_msgs/Object~%# This expresses a object in a 3D space~%int32[] ids                  # possible ids of the detected object (empty if no id could be identified/assigned)~%int32   shape                # shape type (possible types are listed below)~%float64[] shape_variables    # variables correspoding to the shape of the object (possible types are listed below)~%float64[] ids_confidence     # confidence of the possible ids in [0, 1]~%geometry_msgs/Pose pose      # pose of the detected object~%geometry_msgs/Twist twist    # twist of the detected object~%~%# SHAPE_TYPE                      # SHAPE_VARIABLES~%# ====================================================~%int32 SHAPE_UNKOWN           = 0  # []~%int32 SHAPE_POINT            = 1  # []~%int32 SHAPE_CIRCLE           = 2  # [radius]~%int32 SHAPE_ELLIPSE          = 3  # [radius1, radius2]~%int32 SHAPE_SQUARE           = 4  # [width]~%int32 SHAPE_RECTANGLE        = 5  # [length, width]~%int32 SHAPE_HULL             = 6  # [p0, p1, p2, ...]~%int32 SHAPE_LINE             = 7  # [] or [length] ~%~%int32 SHAPE_SPHERE           = 102~%int32 SHAPE_ELLIPSOID        = 103~%int32 SHAPE_CUBE             = 104~%int32 SHAPE_BOX              = 105~%int32 SHAPE_MESH             = 106~%~%int32 SHAPE_TRAFFIC_CONE     = 201 # [radius, color(1 = blue, 2 = yellow, 3 = red)] ~%int32 SHAPE_DOOR             = 202 # [width, height, opening angle (0=closed), nr of door leafs, clockwise (0) counterclockwise (1)]~%int32 SHAPE_MAP_DOOR         = 212 # for doors already mapped, same parameters as usual door~%int32 SHAPE_PERSON           = 203~%int32 SHAPE_VEHICLE          = 204~%int32 SHAPE_FIDUCIAL         = 205~%int32 SHAPE_CONE             = 206 # [radius, height]~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: geometry_msgs/Twist~%# This expresses velocity in free space broken into its linear and angular parts.~%Vector3  linear~%Vector3  angular~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ObjectWithCovarianceStamped>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'object))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ObjectWithCovarianceStamped>))
  "Converts a ROS message object to a list"
  (cl:list 'ObjectWithCovarianceStamped
    (cl:cons ':header (header msg))
    (cl:cons ':object (object msg))
))
