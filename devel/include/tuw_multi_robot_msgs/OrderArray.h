// Generated by gencpp from file tuw_multi_robot_msgs/OrderArray.msg
// DO NOT EDIT!


#ifndef TUW_MULTI_ROBOT_MSGS_MESSAGE_ORDERARRAY_H
#define TUW_MULTI_ROBOT_MSGS_MESSAGE_ORDERARRAY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <tuw_multi_robot_msgs/Order.h>

namespace tuw_multi_robot_msgs
{
template <class ContainerAllocator>
struct OrderArray_
{
  typedef OrderArray_<ContainerAllocator> Type;

  OrderArray_()
    : header()
    , orders()  {
    }
  OrderArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , orders(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::tuw_multi_robot_msgs::Order_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::tuw_multi_robot_msgs::Order_<ContainerAllocator> >> _orders_type;
  _orders_type orders;





  typedef boost::shared_ptr< ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator> const> ConstPtr;

}; // struct OrderArray_

typedef ::tuw_multi_robot_msgs::OrderArray_<std::allocator<void> > OrderArray;

typedef boost::shared_ptr< ::tuw_multi_robot_msgs::OrderArray > OrderArrayPtr;
typedef boost::shared_ptr< ::tuw_multi_robot_msgs::OrderArray const> OrderArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator1> & lhs, const ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.orders == rhs.orders;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator1> & lhs, const ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tuw_multi_robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bbc022246db3f3814b8f8dca9834219a";
  }

  static const char* value(const ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbbc022246db3f381ULL;
  static const uint64_t static_value2 = 0x4b8f8dca9834219aULL;
};

template<class ContainerAllocator>
struct DataType< ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tuw_multi_robot_msgs/OrderArray";
  }

  static const char* value(const ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#################################################################\n"
"## List of multiple orders\n"
"#################################################################\n"
"\n"
"Header header\n"
"tuw_multi_robot_msgs/Order[] orders\n"
"\n"
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
"MSG: tuw_multi_robot_msgs/Order\n"
"#################################################################\n"
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

  static const char* value(const ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.orders);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OrderArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tuw_multi_robot_msgs::OrderArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "orders[]" << std::endl;
    for (size_t i = 0; i < v.orders.size(); ++i)
    {
      s << indent << "  orders[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::tuw_multi_robot_msgs::Order_<ContainerAllocator> >::stream(s, indent + "    ", v.orders[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUW_MULTI_ROBOT_MSGS_MESSAGE_ORDERARRAY_H
