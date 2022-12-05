// Generated by gencpp from file tuw_vehicle_msgs/ChassisState.msg
// DO NOT EDIT!


#ifndef TUW_VEHICLE_MSGS_MESSAGE_CHASSISSTATE_H
#define TUW_VEHICLE_MSGS_MESSAGE_CHASSISSTATE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace tuw_vehicle_msgs
{
template <class ContainerAllocator>
struct ChassisState_
{
  typedef ChassisState_<ContainerAllocator> Type;

  ChassisState_()
    : header()
    , vx(0.0)
    , vy(0.0)
    , omg(0.0)
    , steering_angle(0.0)
    , steering_speed(0.0)
    , front_brake_pressure(0.0)
    , rear_brake_pressure(0.0)  {
    }
  ChassisState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , vx(0.0)
    , vy(0.0)
    , omg(0.0)
    , steering_angle(0.0)
    , steering_speed(0.0)
    , front_brake_pressure(0.0)
    , rear_brake_pressure(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _vx_type;
  _vx_type vx;

   typedef double _vy_type;
  _vy_type vy;

   typedef double _omg_type;
  _omg_type omg;

   typedef double _steering_angle_type;
  _steering_angle_type steering_angle;

   typedef double _steering_speed_type;
  _steering_speed_type steering_speed;

   typedef double _front_brake_pressure_type;
  _front_brake_pressure_type front_brake_pressure;

   typedef double _rear_brake_pressure_type;
  _rear_brake_pressure_type rear_brake_pressure;





  typedef boost::shared_ptr< ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator> const> ConstPtr;

}; // struct ChassisState_

typedef ::tuw_vehicle_msgs::ChassisState_<std::allocator<void> > ChassisState;

typedef boost::shared_ptr< ::tuw_vehicle_msgs::ChassisState > ChassisStatePtr;
typedef boost::shared_ptr< ::tuw_vehicle_msgs::ChassisState const> ChassisStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator1> & lhs, const ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.vx == rhs.vx &&
    lhs.vy == rhs.vy &&
    lhs.omg == rhs.omg &&
    lhs.steering_angle == rhs.steering_angle &&
    lhs.steering_speed == rhs.steering_speed &&
    lhs.front_brake_pressure == rhs.front_brake_pressure &&
    lhs.rear_brake_pressure == rhs.rear_brake_pressure;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator1> & lhs, const ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tuw_vehicle_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "625847a578b2c95d3b5adc71c6f670c0";
  }

  static const char* value(const ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x625847a578b2c95dULL;
  static const uint64_t static_value2 = 0x3b5adc71c6f670c0ULL;
};

template<class ContainerAllocator>
struct DataType< ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tuw_vehicle_msgs/ChassisState";
  }

  static const char* value(const ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"float64 vx\n"
"float64 vy\n"
"float64 omg\n"
"\n"
"# in degrees, negative to the left\n"
"float64 steering_angle\n"
"\n"
"# in deg/s, negative to the left\n"
"float64 steering_speed\n"
"\n"
"# in bar\n"
"float64 front_brake_pressure\n"
"float64 rear_brake_pressure\n"
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
;
  }

  static const char* value(const ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.vx);
      stream.next(m.vy);
      stream.next(m.omg);
      stream.next(m.steering_angle);
      stream.next(m.steering_speed);
      stream.next(m.front_brake_pressure);
      stream.next(m.rear_brake_pressure);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ChassisState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tuw_vehicle_msgs::ChassisState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "vx: ";
    Printer<double>::stream(s, indent + "  ", v.vx);
    s << indent << "vy: ";
    Printer<double>::stream(s, indent + "  ", v.vy);
    s << indent << "omg: ";
    Printer<double>::stream(s, indent + "  ", v.omg);
    s << indent << "steering_angle: ";
    Printer<double>::stream(s, indent + "  ", v.steering_angle);
    s << indent << "steering_speed: ";
    Printer<double>::stream(s, indent + "  ", v.steering_speed);
    s << indent << "front_brake_pressure: ";
    Printer<double>::stream(s, indent + "  ", v.front_brake_pressure);
    s << indent << "rear_brake_pressure: ";
    Printer<double>::stream(s, indent + "  ", v.rear_brake_pressure);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUW_VEHICLE_MSGS_MESSAGE_CHASSISSTATE_H
