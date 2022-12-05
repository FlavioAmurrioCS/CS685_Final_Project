// Generated by gencpp from file tuw_nav_msgs/RouteSegment.msg
// DO NOT EDIT!


#ifndef TUW_NAV_MSGS_MESSAGE_ROUTESEGMENT_H
#define TUW_NAV_MSGS_MESSAGE_ROUTESEGMENT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Pose.h>

namespace tuw_nav_msgs
{
template <class ContainerAllocator>
struct RouteSegment_
{
  typedef RouteSegment_<ContainerAllocator> Type;

  RouteSegment_()
    : id(0)
    , type(0)
    , orientation(0)
    , motion_type(0)
    , start()
    , end()
    , center()
    , level(0)  {
    }
  RouteSegment_(const ContainerAllocator& _alloc)
    : id(0)
    , type(0)
    , orientation(0)
    , motion_type(0)
    , start(_alloc)
    , end(_alloc)
    , center(_alloc)
    , level(0)  {
  (void)_alloc;
    }



   typedef uint32_t _id_type;
  _id_type id;

   typedef uint8_t _type_type;
  _type_type type;

   typedef uint8_t _orientation_type;
  _orientation_type orientation;

   typedef uint8_t _motion_type_type;
  _motion_type_type motion_type;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _start_type;
  _start_type start;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _end_type;
  _end_type end;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _center_type;
  _center_type center;

   typedef int8_t _level_type;
  _level_type level;





  typedef boost::shared_ptr< ::tuw_nav_msgs::RouteSegment_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tuw_nav_msgs::RouteSegment_<ContainerAllocator> const> ConstPtr;

}; // struct RouteSegment_

typedef ::tuw_nav_msgs::RouteSegment_<std::allocator<void> > RouteSegment;

typedef boost::shared_ptr< ::tuw_nav_msgs::RouteSegment > RouteSegmentPtr;
typedef boost::shared_ptr< ::tuw_nav_msgs::RouteSegment const> RouteSegmentConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tuw_nav_msgs::RouteSegment_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tuw_nav_msgs::RouteSegment_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tuw_nav_msgs::RouteSegment_<ContainerAllocator1> & lhs, const ::tuw_nav_msgs::RouteSegment_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.type == rhs.type &&
    lhs.orientation == rhs.orientation &&
    lhs.motion_type == rhs.motion_type &&
    lhs.start == rhs.start &&
    lhs.end == rhs.end &&
    lhs.center == rhs.center &&
    lhs.level == rhs.level;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tuw_nav_msgs::RouteSegment_<ContainerAllocator1> & lhs, const ::tuw_nav_msgs::RouteSegment_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tuw_nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tuw_nav_msgs::RouteSegment_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_nav_msgs::RouteSegment_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_nav_msgs::RouteSegment_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_nav_msgs::RouteSegment_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_nav_msgs::RouteSegment_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_nav_msgs::RouteSegment_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tuw_nav_msgs::RouteSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "26469c8984f3cdfc24371244c703f828";
  }

  static const char* value(const ::tuw_nav_msgs::RouteSegment_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x26469c8984f3cdfcULL;
  static const uint64_t static_value2 = 0x24371244c703f828ULL;
};

template<class ContainerAllocator>
struct DataType< ::tuw_nav_msgs::RouteSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tuw_nav_msgs/RouteSegment";
  }

  static const char* value(const ::tuw_nav_msgs::RouteSegment_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tuw_nav_msgs::RouteSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 id                     # Segment id\n"
"uint8 type                    # Segment type\n"
"                              # NA      = 0\n"
"                              # LINE    = 1\n"
"                              # ARC     = 2\n"
"                              # SPIROS  = 3\n"
"                              # SPLINE  = 4\n"
"uint8 orientation             # Segment orientation\n"
"                              # CLOCKWISE  = 0\n"
"                              # COUNTER_CLOCKWISE  = 1\n"
"uint8 motion_type             # Motion type\n"
"                              # NA = 0\n"
"                              # FLAT = 1\n"
"                              # DWA_SLOW = 2\n"
"                              # DWA_FAST = 3\n"
"                              # MPC_SLOW = 4\n"
"                              # MPC_FAST = 5\n"
"                              # PI_SLOW = 6\n"
"                              # PI_FAST = 7\n"
"geometry_msgs/Pose start\n"
"geometry_msgs/Pose end\n"
"geometry_msgs/Pose center    \n"
"int8 level\n"
"\n"
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

  static const char* value(const ::tuw_nav_msgs::RouteSegment_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tuw_nav_msgs::RouteSegment_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.type);
      stream.next(m.orientation);
      stream.next(m.motion_type);
      stream.next(m.start);
      stream.next(m.end);
      stream.next(m.center);
      stream.next(m.level);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RouteSegment_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tuw_nav_msgs::RouteSegment_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tuw_nav_msgs::RouteSegment_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
    s << indent << "orientation: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.orientation);
    s << indent << "motion_type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.motion_type);
    s << indent << "start: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.start);
    s << indent << "end: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.end);
    s << indent << "center: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.center);
    s << indent << "level: ";
    Printer<int8_t>::stream(s, indent + "  ", v.level);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUW_NAV_MSGS_MESSAGE_ROUTESEGMENT_H
