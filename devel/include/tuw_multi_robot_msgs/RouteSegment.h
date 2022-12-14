// Generated by gencpp from file tuw_multi_robot_msgs/RouteSegment.msg
// DO NOT EDIT!


#ifndef TUW_MULTI_ROBOT_MSGS_MESSAGE_ROUTESEGMENT_H
#define TUW_MULTI_ROBOT_MSGS_MESSAGE_ROUTESEGMENT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <tuw_multi_robot_msgs/RoutePrecondition.h>
#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Pose.h>

namespace tuw_multi_robot_msgs
{
template <class ContainerAllocator>
struct RouteSegment_
{
  typedef RouteSegment_<ContainerAllocator> Type;

  RouteSegment_()
    : segment_id(0)
    , preconditions()
    , start()
    , end()
    , width(0.0)  {
    }
  RouteSegment_(const ContainerAllocator& _alloc)
    : segment_id(0)
    , preconditions(_alloc)
    , start(_alloc)
    , end(_alloc)
    , width(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _segment_id_type;
  _segment_id_type segment_id;

   typedef std::vector< ::tuw_multi_robot_msgs::RoutePrecondition_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::tuw_multi_robot_msgs::RoutePrecondition_<ContainerAllocator> >> _preconditions_type;
  _preconditions_type preconditions;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _start_type;
  _start_type start;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _end_type;
  _end_type end;

   typedef float _width_type;
  _width_type width;





  typedef boost::shared_ptr< ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator> const> ConstPtr;

}; // struct RouteSegment_

typedef ::tuw_multi_robot_msgs::RouteSegment_<std::allocator<void> > RouteSegment;

typedef boost::shared_ptr< ::tuw_multi_robot_msgs::RouteSegment > RouteSegmentPtr;
typedef boost::shared_ptr< ::tuw_multi_robot_msgs::RouteSegment const> RouteSegmentConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator1> & lhs, const ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator2> & rhs)
{
  return lhs.segment_id == rhs.segment_id &&
    lhs.preconditions == rhs.preconditions &&
    lhs.start == rhs.start &&
    lhs.end == rhs.end &&
    lhs.width == rhs.width;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator1> & lhs, const ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tuw_multi_robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3de3459e51270b121f6fd1fa4b97bc15";
  }

  static const char* value(const ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3de3459e51270b12ULL;
  static const uint64_t static_value2 = 0x1f6fd1fa4b97bc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tuw_multi_robot_msgs/RouteSegment";
  }

  static const char* value(const ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#################################################################\n"
"## Describes a segment on a route with: start, end, width\n"
"## and preconditions for synchronisation to other robots\n"
"#################################################################\n"
"\n"
"int32 segment_id                        # the unique identifier of a segment\n"
"RoutePrecondition[] preconditions       # the preconditions, which have to be met before entering a segment\n"
"geometry_msgs/Pose start                # startpoint of the segment\n"
"geometry_msgs/Pose end                  # endpoint of the segment\n"
"float32 width                           # width of the segment \n"
"\n"
"================================================================================\n"
"MSG: tuw_multi_robot_msgs/RoutePrecondition\n"
"#################################################################\n"
"## Route Preconditions are used to sync robots on a route\n"
"## e.g.: Each robot publishes its current step of its route \n"
"## with such a message\n"
"## The specific segments of a route are marked with such \n"
"## preconditions to block a robot from entering a segment\n"
"## until the sync message of the other robot has the right \n"
"## route_segment_nr\n"
"#################################################################\n"
"\n"
"string robot_id                  # the robot name for the precondition \n"
"int32 current_route_segment      # the segment nr of the route executed by the given robot\n"
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

  static const char* value(const ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.segment_id);
      stream.next(m.preconditions);
      stream.next(m.start);
      stream.next(m.end);
      stream.next(m.width);
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
struct Printer< ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tuw_multi_robot_msgs::RouteSegment_<ContainerAllocator>& v)
  {
    s << indent << "segment_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.segment_id);
    s << indent << "preconditions[]" << std::endl;
    for (size_t i = 0; i < v.preconditions.size(); ++i)
    {
      s << indent << "  preconditions[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::tuw_multi_robot_msgs::RoutePrecondition_<ContainerAllocator> >::stream(s, indent + "    ", v.preconditions[i]);
    }
    s << indent << "start: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.start);
    s << indent << "end: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.end);
    s << indent << "width: ";
    Printer<float>::stream(s, indent + "  ", v.width);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUW_MULTI_ROBOT_MSGS_MESSAGE_ROUTESEGMENT_H
