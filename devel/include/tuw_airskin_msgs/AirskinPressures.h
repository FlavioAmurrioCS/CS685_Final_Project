// Generated by gencpp from file tuw_airskin_msgs/AirskinPressures.msg
// DO NOT EDIT!


#ifndef TUW_AIRSKIN_MSGS_MESSAGE_AIRSKINPRESSURES_H
#define TUW_AIRSKIN_MSGS_MESSAGE_AIRSKINPRESSURES_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace tuw_airskin_msgs
{
template <class ContainerAllocator>
struct AirskinPressures_
{
  typedef AirskinPressures_<ContainerAllocator> Type;

  AirskinPressures_()
    : header()
    , pressures()  {
    }
  AirskinPressures_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pressures(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> _pressures_type;
  _pressures_type pressures;





  typedef boost::shared_ptr< ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator> const> ConstPtr;

}; // struct AirskinPressures_

typedef ::tuw_airskin_msgs::AirskinPressures_<std::allocator<void> > AirskinPressures;

typedef boost::shared_ptr< ::tuw_airskin_msgs::AirskinPressures > AirskinPressuresPtr;
typedef boost::shared_ptr< ::tuw_airskin_msgs::AirskinPressures const> AirskinPressuresConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator1> & lhs, const ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.pressures == rhs.pressures;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator1> & lhs, const ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tuw_airskin_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator> >
{
  static const char* value()
  {
    return "48f413c906b9a36e09c9d0c4a7801786";
  }

  static const char* value(const ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x48f413c906b9a36eULL;
  static const uint64_t static_value2 = 0x09c9d0c4a7801786ULL;
};

template<class ContainerAllocator>
struct DataType< ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tuw_airskin_msgs/AirskinPressures";
  }

  static const char* value(const ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This expresses a set of AirSkin pad pressures\n"
"Header header                  # timestamp in the header is the acquisition time and frame\n"
"uint32[] pressures             # pressure values of corresponding AirSkin pads\n"
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

  static const char* value(const ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pressures);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AirskinPressures_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tuw_airskin_msgs::AirskinPressures_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pressures[]" << std::endl;
    for (size_t i = 0; i < v.pressures.size(); ++i)
    {
      s << indent << "  pressures[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.pressures[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TUW_AIRSKIN_MSGS_MESSAGE_AIRSKINPRESSURES_H
