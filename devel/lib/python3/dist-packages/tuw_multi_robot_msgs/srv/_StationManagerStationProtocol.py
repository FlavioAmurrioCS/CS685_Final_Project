# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from tuw_multi_robot_msgs/StationManagerStationProtocolRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg
import tuw_multi_robot_msgs.msg

class StationManagerStationProtocolRequest(genpy.Message):
  _md5sum = "8b92b8080350b8c5cbe5086e70339abf"
  _type = "tuw_multi_robot_msgs/StationManagerStationProtocolRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """#################################################################
## Protocol to Send and Receive Control Commands
#################################################################

string                          request         # request string
tuw_multi_robot_msgs/Station    station         # station message

# request constants
string APPEND = append                          # request to append sent station
string REMOVE = remove                          # request to remove sent station


================================================================================
MSG: tuw_multi_robot_msgs/Station
#################################################################
## Station for Robots to Drive to
#################################################################

Header                 header       # header
int32                  id           # station ID
string                 name         # station name
geometry_msgs/Pose     pose         # station position
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
  # Pseudo-constants
  APPEND = 'append                          # request to append sent station'
  REMOVE = 'remove                          # request to remove sent station'

  __slots__ = ['request','station']
  _slot_types = ['string','tuw_multi_robot_msgs/Station']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       request,station

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(StationManagerStationProtocolRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.request is None:
        self.request = ''
      if self.station is None:
        self.station = tuw_multi_robot_msgs.msg.Station()
    else:
      self.request = ''
      self.station = tuw_multi_robot_msgs.msg.Station()

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
      _x = self.request
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_3I().pack(_x.station.header.seq, _x.station.header.stamp.secs, _x.station.header.stamp.nsecs))
      _x = self.station.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.station.id
      buff.write(_get_struct_i().pack(_x))
      _x = self.station.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_7d().pack(_x.station.pose.position.x, _x.station.pose.position.y, _x.station.pose.position.z, _x.station.pose.orientation.x, _x.station.pose.orientation.y, _x.station.pose.orientation.z, _x.station.pose.orientation.w))
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
      if self.station is None:
        self.station = tuw_multi_robot_msgs.msg.Station()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.request = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.request = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.station.header.seq, _x.station.header.stamp.secs, _x.station.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.station.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.station.header.frame_id = str[start:end]
      start = end
      end += 4
      (self.station.id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.station.name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.station.name = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.station.pose.position.x, _x.station.pose.position.y, _x.station.pose.position.z, _x.station.pose.orientation.x, _x.station.pose.orientation.y, _x.station.pose.orientation.z, _x.station.pose.orientation.w,) = _get_struct_7d().unpack(str[start:end])
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
      _x = self.request
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_3I().pack(_x.station.header.seq, _x.station.header.stamp.secs, _x.station.header.stamp.nsecs))
      _x = self.station.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.station.id
      buff.write(_get_struct_i().pack(_x))
      _x = self.station.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_7d().pack(_x.station.pose.position.x, _x.station.pose.position.y, _x.station.pose.position.z, _x.station.pose.orientation.x, _x.station.pose.orientation.y, _x.station.pose.orientation.z, _x.station.pose.orientation.w))
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
      if self.station is None:
        self.station = tuw_multi_robot_msgs.msg.Station()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.request = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.request = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.station.header.seq, _x.station.header.stamp.secs, _x.station.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.station.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.station.header.frame_id = str[start:end]
      start = end
      end += 4
      (self.station.id,) = _get_struct_i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.station.name = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.station.name = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.station.pose.position.x, _x.station.pose.position.y, _x.station.pose.position.z, _x.station.pose.orientation.x, _x.station.pose.orientation.y, _x.station.pose.orientation.z, _x.station.pose.orientation.w,) = _get_struct_7d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_7d = None
def _get_struct_7d():
    global _struct_7d
    if _struct_7d is None:
        _struct_7d = struct.Struct("<7d")
    return _struct_7d
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from tuw_multi_robot_msgs/StationManagerStationProtocolResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class StationManagerStationProtocolResponse(genpy.Message):
  _md5sum = "489f190c203b039f852a57035560eed4"
  _type = "tuw_multi_robot_msgs/StationManagerStationProtocolResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
string                          response        # response string

# response constants
string EXECUTED = executed                      # response if the request could be executed successful
string FAILED = failed                          # response if the request could not be executed successful
string ERROR = error                            # response if the request is unknown
"""
  # Pseudo-constants
  EXECUTED = 'executed                      # response if the request could be executed successful'
  FAILED = 'failed                          # response if the request could not be executed successful'
  ERROR = 'error                            # response if the request is unknown'

  __slots__ = ['response']
  _slot_types = ['string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       response

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(StationManagerStationProtocolResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.response is None:
        self.response = ''
    else:
      self.response = ''

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
      _x = self.response
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
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
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.response = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.response = str[start:end]
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
      _x = self.response
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
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
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.response = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.response = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
class StationManagerStationProtocol(object):
  _type          = 'tuw_multi_robot_msgs/StationManagerStationProtocol'
  _md5sum = '1f5e895558b51eb5ebcc012fba03f68a'
  _request_class  = StationManagerStationProtocolRequest
  _response_class = StationManagerStationProtocolResponse
