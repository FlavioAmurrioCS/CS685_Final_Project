// Generated by gencpp from file tuw_waypoint_to_spline_msgs/PathToSplineResponse.msg
// DO NOT EDIT!


#ifndef TUW_WAYPOINT_TO_SPLINE_MSGS_MESSAGE_PATHTOSPLINERESPONSE_H
#define TUW_WAYPOINT_TO_SPLINE_MSGS_MESSAGE_PATHTOSPLINERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <tuw_nav_msgs/Spline.h>

namespace tuw_waypoint_to_spline_msgs
{
template <class ContainerAllocator>
struct PathToSplineResponse_
{
  typedef PathToSplineResponse_<ContainerAllocator> Type;

  PathToSplineResponse_()
    : spline()  {
    }
  PathToSplineResponse_(const ContainerAllocator& _alloc)
    : spline(_alloc)  {
  (void)_alloc;
    }



   typedef  ::tuw_nav_msgs::Spline_<ContainerAllocator>  _spline_type;
  _spline_type spline;





  typedef boost::shared_ptr< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator> const> ConstPtr;

}; // struct PathToSplineResponse_

typedef ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<std::allocator<void> > PathToSplineResponse;

typedef boost::shared_ptr< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse > PathToSplineResponsePtr;
typedef boost::shared_ptr< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse const> PathToSplineResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator1> & lhs, const ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator2> & rhs)
{
  return lhs.spline == rhs.spline;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator1> & lhs, const ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tuw_waypoint_to_spline_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "646b4ff94f829737fb8ee6979f0a22db";
  }

  static const char* value(const ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x646b4ff94f829737ULL;
  static const uint64_t static_value2 = 0xfb8ee6979f0a22dbULL;
};

template<class ContainerAllocator>
struct DataType< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tuw_waypoint_to_spline_msgs/PathToSplineResponse";
  }

  static const char* value(const ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tuw_nav_msgs/Spline spline\n"
"\n"
"================================================================================\n"
"MSG: tuw_nav_msgs/Spline\n"
"Header header\n"
"float64[] knots\n"
"Float64Array[] ctrls\n"
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
"MSG: tuw_nav_msgs/Float64Array\n"
"float64[] val\n"
;
  }

  static const char* value(const ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.spline);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PathToSplineResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tuw_waypoint_to_spline_msgs::PathToSplineResponse_<ContainerAllocator>& v)
  {
    s << indent << "spline: ";
    s << std::endl;
    Printer< ::tuw_nav_msgs::Spline_<ContainerAllocator> >::stream(s, indent + "  ", v.spline);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUW_WAYPOINT_TO_SPLINE_MSGS_MESSAGE_PATHTOSPLINERESPONSE_H
