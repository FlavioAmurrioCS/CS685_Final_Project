// Generated by gencpp from file tuw_geometry_msgs/LineSegment.msg
// DO NOT EDIT!


#ifndef TUW_GEOMETRY_MSGS_MESSAGE_LINESEGMENT_H
#define TUW_GEOMETRY_MSGS_MESSAGE_LINESEGMENT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>
#include <geometry_msgs/Point.h>

namespace tuw_geometry_msgs
{
template <class ContainerAllocator>
struct LineSegment_
{
  typedef LineSegment_<ContainerAllocator> Type;

  LineSegment_()
    : id(0)
    , p0()
    , p1()  {
    }
  LineSegment_(const ContainerAllocator& _alloc)
    : id(0)
    , p0(_alloc)
    , p1(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _id_type;
  _id_type id;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _p0_type;
  _p0_type p0;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _p1_type;
  _p1_type p1;





  typedef boost::shared_ptr< ::tuw_geometry_msgs::LineSegment_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tuw_geometry_msgs::LineSegment_<ContainerAllocator> const> ConstPtr;

}; // struct LineSegment_

typedef ::tuw_geometry_msgs::LineSegment_<std::allocator<void> > LineSegment;

typedef boost::shared_ptr< ::tuw_geometry_msgs::LineSegment > LineSegmentPtr;
typedef boost::shared_ptr< ::tuw_geometry_msgs::LineSegment const> LineSegmentConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tuw_geometry_msgs::LineSegment_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tuw_geometry_msgs::LineSegment_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tuw_geometry_msgs::LineSegment_<ContainerAllocator1> & lhs, const ::tuw_geometry_msgs::LineSegment_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.p0 == rhs.p0 &&
    lhs.p1 == rhs.p1;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tuw_geometry_msgs::LineSegment_<ContainerAllocator1> & lhs, const ::tuw_geometry_msgs::LineSegment_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tuw_geometry_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tuw_geometry_msgs::LineSegment_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_geometry_msgs::LineSegment_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_geometry_msgs::LineSegment_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_geometry_msgs::LineSegment_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_geometry_msgs::LineSegment_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_geometry_msgs::LineSegment_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tuw_geometry_msgs::LineSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f8813871a1413bea6f3b9d3b1470ee5f";
  }

  static const char* value(const ::tuw_geometry_msgs::LineSegment_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf8813871a1413beaULL;
  static const uint64_t static_value2 = 0x6f3b9d3b1470ee5fULL;
};

template<class ContainerAllocator>
struct DataType< ::tuw_geometry_msgs::LineSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tuw_geometry_msgs/LineSegment";
  }

  static const char* value(const ::tuw_geometry_msgs::LineSegment_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tuw_geometry_msgs::LineSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 id                     # Segment id\n"
"\n"
"geometry_msgs/Point p0        # linesegment endpoint 0\n"
"geometry_msgs/Point p1        # linesegment endpoint 1\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::tuw_geometry_msgs::LineSegment_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tuw_geometry_msgs::LineSegment_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.p0);
      stream.next(m.p1);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LineSegment_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tuw_geometry_msgs::LineSegment_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tuw_geometry_msgs::LineSegment_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "p0: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.p0);
    s << indent << "p1: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.p1);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUW_GEOMETRY_MSGS_MESSAGE_LINESEGMENT_H
