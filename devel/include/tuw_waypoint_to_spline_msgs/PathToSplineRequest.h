// Generated by gencpp from file tuw_waypoint_to_spline_msgs/PathToSplineRequest.msg
// DO NOT EDIT!


#ifndef TUW_WAYPOINT_TO_SPLINE_MSGS_MESSAGE_PATHTOSPLINEREQUEST_H
#define TUW_WAYPOINT_TO_SPLINE_MSGS_MESSAGE_PATHTOSPLINEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nav_msgs/Path.h>

namespace tuw_waypoint_to_spline_msgs
{
template <class ContainerAllocator>
struct PathToSplineRequest_
{
  typedef PathToSplineRequest_<ContainerAllocator> Type;

  PathToSplineRequest_()
    : path()  {
    }
  PathToSplineRequest_(const ContainerAllocator& _alloc)
    : path(_alloc)  {
  (void)_alloc;
    }



   typedef  ::nav_msgs::Path_<ContainerAllocator>  _path_type;
  _path_type path;





  typedef boost::shared_ptr< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PathToSplineRequest_

typedef ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<std::allocator<void> > PathToSplineRequest;

typedef boost::shared_ptr< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest > PathToSplineRequestPtr;
typedef boost::shared_ptr< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest const> PathToSplineRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator1> & lhs, const ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator2> & rhs)
{
  return lhs.path == rhs.path;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator1> & lhs, const ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tuw_waypoint_to_spline_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "58d6f138c7de7ef47c75d4b7e5df5472";
  }

  static const char* value(const ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x58d6f138c7de7ef4ULL;
  static const uint64_t static_value2 = 0x7c75d4b7e5df5472ULL;
};

template<class ContainerAllocator>
struct DataType< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tuw_waypoint_to_spline_msgs/PathToSplineRequest";
  }

  static const char* value(const ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_msgs/Path path\n"
"\n"
"================================================================================\n"
"MSG: nav_msgs/Path\n"
"#An array of poses that represents a Path for a robot to follow\n"
"Header header\n"
"geometry_msgs/PoseStamped[] poses\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.path);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PathToSplineRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tuw_waypoint_to_spline_msgs::PathToSplineRequest_<ContainerAllocator>& v)
  {
    s << indent << "path: ";
    s << std::endl;
    Printer< ::nav_msgs::Path_<ContainerAllocator> >::stream(s, indent + "  ", v.path);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUW_WAYPOINT_TO_SPLINE_MSGS_MESSAGE_PATHTOSPLINEREQUEST_H
