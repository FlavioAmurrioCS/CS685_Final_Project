// Generated by gencpp from file tuw_nav_msgs/PathVec.msg
// DO NOT EDIT!


#ifndef TUW_NAV_MSGS_MESSAGE_PATHVEC_H
#define TUW_NAV_MSGS_MESSAGE_PATHVEC_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <nav_msgs/Path.h>

namespace tuw_nav_msgs
{
template <class ContainerAllocator>
struct PathVec_
{
  typedef PathVec_<ContainerAllocator> Type;

  PathVec_()
    : header()
    , paths()  {
    }
  PathVec_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , paths(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::nav_msgs::Path_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::nav_msgs::Path_<ContainerAllocator> >> _paths_type;
  _paths_type paths;





  typedef boost::shared_ptr< ::tuw_nav_msgs::PathVec_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tuw_nav_msgs::PathVec_<ContainerAllocator> const> ConstPtr;

}; // struct PathVec_

typedef ::tuw_nav_msgs::PathVec_<std::allocator<void> > PathVec;

typedef boost::shared_ptr< ::tuw_nav_msgs::PathVec > PathVecPtr;
typedef boost::shared_ptr< ::tuw_nav_msgs::PathVec const> PathVecConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tuw_nav_msgs::PathVec_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tuw_nav_msgs::PathVec_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tuw_nav_msgs::PathVec_<ContainerAllocator1> & lhs, const ::tuw_nav_msgs::PathVec_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.paths == rhs.paths;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tuw_nav_msgs::PathVec_<ContainerAllocator1> & lhs, const ::tuw_nav_msgs::PathVec_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tuw_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tuw_nav_msgs::PathVec_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_nav_msgs::PathVec_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_nav_msgs::PathVec_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_nav_msgs::PathVec_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_nav_msgs::PathVec_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_nav_msgs::PathVec_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tuw_nav_msgs::PathVec_<ContainerAllocator> >
{
  static const char* value()
  {
    return "15f5d16b8f01a09a8f8f7b8eec36aa1c";
  }

  static const char* value(const ::tuw_nav_msgs::PathVec_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x15f5d16b8f01a09aULL;
  static const uint64_t static_value2 = 0x8f8f7b8eec36aa1cULL;
};

template<class ContainerAllocator>
struct DataType< ::tuw_nav_msgs::PathVec_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tuw_nav_msgs/PathVec";
  }

  static const char* value(const ::tuw_nav_msgs::PathVec_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tuw_nav_msgs::PathVec_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"nav_msgs/Path[] paths\n"
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
"MSG: nav_msgs/Path\n"
"#An array of poses that represents a Path for a robot to follow\n"
"Header header\n"
"geometry_msgs/PoseStamped[] poses\n"
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

  static const char* value(const ::tuw_nav_msgs::PathVec_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tuw_nav_msgs::PathVec_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.paths);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PathVec_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tuw_nav_msgs::PathVec_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tuw_nav_msgs::PathVec_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "paths[]" << std::endl;
    for (size_t i = 0; i < v.paths.size(); ++i)
    {
      s << indent << "  paths[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::nav_msgs::Path_<ContainerAllocator> >::stream(s, indent + "    ", v.paths[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUW_NAV_MSGS_MESSAGE_PATHVEC_H
