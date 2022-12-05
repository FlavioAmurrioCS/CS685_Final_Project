# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from tuw_multi_robot_msgs/RouteSegment.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import tuw_multi_robot_msgs.msg

class RouteSegment(genpy.Message):
  _md5sum = "3de3459e51270b121f6fd1fa4b97bc15"
  _type = "tuw_multi_robot_msgs/RouteSegment"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """#################################################################
## Describes a segment on a route with: start, end, width
## and preconditions for synchronisation to other robots
#################################################################

int32 segment_id                        # the unique identifier of a segment
RoutePrecondition[] preconditions       # the preconditions, which have to be met before entering a segment
geometry_msgs/Pose start                # startpoint of the segment
geometry_msgs/Pose end                  # endpoint of the segment
float32 width                           # width of the segment 

================================================================================
MSG: tuw_multi_robot_msgs/RoutePrecondition
#################################################################
## Route Preconditions are used to sync robots on a route
## e.g.: Each robot publishes its current step of its route 
## with such a message
## The specific segments of a route are marked with such 
## preconditions to block a robot from entering a segment
## until the sync message of the other robot has the right 
## route_segment_nr
#################################################################

string robot_id                  # the robot name for the precondition 
int32 current_route_segment      # the segment nr of the route executed by the given robot
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
"""
  __slots__ = ['segment_id','preconditions','start','end','width']
  _slot_types = ['int32','tuw_multi_robot_msgs/RoutePrecondition[]','geometry_msgs/Pose','geometry_msgs/Pose','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       segment_id,preconditions,start,end,width

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RouteSegment, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.segment_id is None:
        self.segment_id = 0
      if self.preconditions is None:
        self.preconditions = []
      if self.start is None:
        self.start = geometry_msgs.msg.Pose()
      if self.end is None:
        self.end = geometry_msgs.msg.Pose()
      if self.width is None:
        self.width = 0.
    else:
      self.segment_id = 0
      self.preconditions = []
      self.start = geometry_msgs.msg.Pose()
      self.end = geometry_msgs.msg.Pose()
      self.width = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self.segment_id
      buff.write(_get_struct_i().pack(_x))
      length = len(self.preconditions)
      buff.write(_struct_I.pack(length))
      for val1 in self.preconditions:
        _x = val1.robot_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.current_route_segment
        buff.write(_get_struct_i().pack(_x))
      _x = self
      buff.write(_get_struct_14df().pack(_x.start.position.x, _x.start.position.y, _x.start.position.z, _x.start.orientation.x, _x.start.orientation.y, _x.start.orientation.z, _x.start.orientation.w, _x.end.position.x, _x.end.position.y, _x.end.position.z, _x.end.orientation.x, _x.end.orientation.y, _x.end.orientation.z, _x.end.orientation.w, _x.width))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.preconditions is None:
        self.preconditions = None
      if self.start is None:
        self.start = geometry_msgs.msg.Pose()
      if self.end is None:
        self.end = geometry_msgs.msg.Pose()
      end = 0
      start = end
      end += 4
      (self.segment_id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.preconditions = []
      for i in range(0, length):
        val1 = tuw_multi_robot_msgs.msg.RoutePrecondition()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.robot_id = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.robot_id = str[start:end]
        start = end
        end += 4
        (val1.current_route_segment,) = _get_struct_i().unpack(str[start:end])
        self.preconditions.append(val1)
      _x = self
      start = end
      end += 116
      (_x.start.position.x, _x.start.position.y, _x.start.position.z, _x.start.orientation.x, _x.start.orientation.y, _x.start.orientation.z, _x.start.orientation.w, _x.end.position.x, _x.end.position.y, _x.end.position.z, _x.end.orientation.x, _x.end.orientation.y, _x.end.orientation.z, _x.end.orientation.w, _x.width,) = _get_struct_14df().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self.segment_id
      buff.write(_get_struct_i().pack(_x))
      length = len(self.preconditions)
      buff.write(_struct_I.pack(length))
      for val1 in self.preconditions:
        _x = val1.robot_id
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.current_route_segment
        buff.write(_get_struct_i().pack(_x))
      _x = self
      buff.write(_get_struct_14df().pack(_x.start.position.x, _x.start.position.y, _x.start.position.z, _x.start.orientation.x, _x.start.orientation.y, _x.start.orientation.z, _x.start.orientation.w, _x.end.position.x, _x.end.position.y, _x.end.position.z, _x.end.orientation.x, _x.end.orientation.y, _x.end.orientation.z, _x.end.orientation.w, _x.width))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.preconditions is None:
        self.preconditions = None
      if self.start is None:
        self.start = geometry_msgs.msg.Pose()
      if self.end is None:
        self.end = geometry_msgs.msg.Pose()
      end = 0
      start = end
      end += 4
      (self.segment_id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.preconditions = []
      for i in range(0, length):
        val1 = tuw_multi_robot_msgs.msg.RoutePrecondition()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.robot_id = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.robot_id = str[start:end]
        start = end
        end += 4
        (val1.current_route_segment,) = _get_struct_i().unpack(str[start:end])
        self.preconditions.append(val1)
      _x = self
      start = end
      end += 116
      (_x.start.position.x, _x.start.position.y, _x.start.position.z, _x.start.orientation.x, _x.start.orientation.y, _x.start.orientation.z, _x.start.orientation.w, _x.end.position.x, _x.end.position.y, _x.end.position.z, _x.end.orientation.x, _x.end.orientation.y, _x.end.orientation.z, _x.end.orientation.w, _x.width,) = _get_struct_14df().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_14df = None
def _get_struct_14df():
    global _struct_14df
    if _struct_14df is None:
        _struct_14df = struct.Struct("<14df")
    return _struct_14df
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
