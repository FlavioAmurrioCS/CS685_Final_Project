// Generated by gencpp from file tuw_multi_robot_msgs/Order.msg
// DO NOT EDIT!


#ifndef TUW_MULTI_ROBOT_MSGS_MESSAGE_ORDER_H
#define TUW_MULTI_ROBOT_MSGS_MESSAGE_ORDER_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <tuw_multi_robot_msgs/Station.h>

namespace tuw_multi_robot_msgs
{
template <class ContainerAllocator>
struct Order_
{
  typedef Order_<ContainerAllocator> Type;

  Order_()
    : header()
    , order_id(0)
    , order_name()
    , stations()  {
    }
  Order_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , order_id(0)
    , order_name(_alloc)
    , stations(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _order_id_type;
  _order_id_type order_id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _order_name_type;
  _order_name_type order_name;

   typedef std::vector< ::tuw_multi_robot_msgs::Station_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::tuw_multi_robot_msgs::Station_<ContainerAllocator> >> _stations_type;
  _stations_type stations;





  typedef boost::shared_ptr< ::tuw_multi_robot_msgs::Order_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tuw_multi_robot_msgs::Order_<ContainerAllocator> const> ConstPtr;

}; // struct Order_

typedef ::tuw_multi_robot_msgs::Order_<std::allocator<void> > Order;

typedef boost::shared_ptr< ::tuw_multi_robot_msgs::Order > OrderPtr;
typedef boost::shared_ptr< ::tuw_multi_robot_msgs::Order const> OrderConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tuw_multi_robot_msgs::Order_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tuw_multi_robot_msgs::Order_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tuw_multi_robot_msgs::Order_<ContainerAllocator1> & lhs, const ::tuw_multi_robot_msgs::Order_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.order_id == rhs.order_id &&
    lhs.order_name == rhs.order_name &&
    lhs.stations == rhs.stations;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tuw_multi_robot_msgs::Order_<ContainerAllocator1> & lhs, const ::tuw_multi_robot_msgs::Order_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tuw_multi_robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tuw_multi_robot_msgs::Order_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_multi_robot_msgs::Order_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_multi_robot_msgs::Order_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_multi_robot_msgs::Order_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_multi_robot_msgs::Order_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_multi_robot_msgs::Order_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tuw_multi_robot_msgs::Order_<ContainerAllocator> >
{
  static const char* value()
  {
    return "482fb916d477e45e362167df5ed6a68c";
  }

  static const char* value(const ::tuw_multi_robot_msgs::Order_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x482fb916d477e45eULL;
  static const uint64_t static_value2 = 0x362167df5ed6a68cULL;
};

template<class ContainerAllocator>
struct DataType< ::tuw_multi_robot_msgs::Order_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tuw_multi_robot_msgs/Order";
  }

  static const char* value(const ::tuw_multi_robot_msgs::Order_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tuw_multi_robot_msgs::Order_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#################################################################\n"
"## Good to deliver from position A to B (via intermediate \n"
"## positions)\n"
"#################################################################\n"
"\n"
"Header                 header\n"
"int32                  order_id\n"
"string                 order_name\n"
"Station[]              stations\n"
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
"MSG: tuw_multi_robot_msgs/Station\n"
"#################################################################\n"
"## Station for Robots to Drive to\n"
"#################################################################\n"
"\n"
"Header                 header       # header\n"
"int32                  id           # station ID\n"
"string                 name         # station name\n"
"geometry_msgs/Pose     pose         # station position\n"
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

  static const char* value(const ::tuw_multi_robot_msgs::Order_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tuw_multi_robot_msgs::Order_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.order_id);
      stream.next(m.order_name);
      stream.next(m.stations);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Order_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tuw_multi_robot_msgs::Order_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tuw_multi_robot_msgs::Order_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "order_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.order_id);
    s << indent << "order_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.order_name);
    s << indent << "stations[]" << std::endl;
    for (size_t i = 0; i < v.stations.size(); ++i)
    {
      s << indent << "  stations[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::tuw_multi_robot_msgs::Station_<ContainerAllocator> >::stream(s, indent + "    ", v.stations[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUW_MULTI_ROBOT_MSGS_MESSAGE_ORDER_H
