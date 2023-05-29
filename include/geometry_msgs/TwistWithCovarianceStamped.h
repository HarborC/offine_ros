// Generated by gencpp from file geometry_msgs/TwistWithCovarianceStamped.msg
// DO NOT EDIT!

#ifndef GEOMETRY_MSGS_MESSAGE_TWISTWITHCOVARIANCESTAMPED_H
#define GEOMETRY_MSGS_MESSAGE_TWISTWITHCOVARIANCESTAMPED_H

#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/TwistWithCovariance.h>

namespace geometry_msgs {
template <class ContainerAllocator>
struct TwistWithCovarianceStamped_ {
  typedef TwistWithCovarianceStamped_<ContainerAllocator> Type;

  TwistWithCovarianceStamped_() : header(), twist() {}
  TwistWithCovarianceStamped_(const ContainerAllocator& _alloc)
      : header(_alloc), twist(_alloc) {
    (void)_alloc;
  }

  typedef ::std_msgs::Header_<ContainerAllocator> _header_type;
  _header_type header;

  typedef ::geometry_msgs::TwistWithCovariance_<ContainerAllocator> _twist_type;
  _twist_type twist;

  typedef boost::shared_ptr< ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator> >
      Ptr;
  typedef boost::shared_ptr<
      ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator> const>
      ConstPtr;

};  // struct TwistWithCovarianceStamped_

typedef ::geometry_msgs::TwistWithCovarianceStamped_<std::allocator<void> >
    TwistWithCovarianceStamped;

typedef boost::shared_ptr< ::geometry_msgs::TwistWithCovarianceStamped>
    TwistWithCovarianceStampedPtr;
typedef boost::shared_ptr< ::geometry_msgs::TwistWithCovarianceStamped const>
    TwistWithCovarianceStampedConstPtr;

// constants requiring out of line definition

template <typename ContainerAllocator>
std::ostream& operator<<(
    std::ostream& s,
    const ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator>& v) {
  ros::message_operations::Printer<
      ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator> >::stream(s, "", v);
  return s;
}

template <typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator1>& lhs,
                const ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator2>& rhs) {
  return lhs.header == rhs.header && lhs.twist == rhs.twist;
}

template <typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator1>& lhs,
                const ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator2>& rhs) {
  return !(lhs == rhs);
}

}  // namespace geometry_msgs

namespace ros {
namespace message_traits {

template <class ContainerAllocator>
struct IsMessage< ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator> >
    : TrueType {};

template <class ContainerAllocator>
struct IsMessage< ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator> const>
    : TrueType {};

template <class ContainerAllocator>
struct IsFixedSize< ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator> >
    : FalseType {};

template <class ContainerAllocator>
struct IsFixedSize< ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator> const>
    : FalseType {};

template <class ContainerAllocator>
struct HasHeader< ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator> >
    : TrueType {};

template <class ContainerAllocator>
struct HasHeader< ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator> const>
    : TrueType {};

template <class ContainerAllocator>
struct MD5Sum< ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator> > {
  static const char* value() { return "8927a1a12fb2607ceea095b2dc440a96"; }

  static const char* value(
      const ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator>&) {
    return value();
  }
  static const uint64_t static_value1 = 0x8927a1a12fb2607cULL;
  static const uint64_t static_value2 = 0xeea095b2dc440a96ULL;
};

template <class ContainerAllocator>
struct DataType< ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator> > {
  static const char* value() { return "geometry_msgs/TwistWithCovarianceStamped"; }

  static const char* value(
      const ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator>&) {
    return value();
  }
};

template <class ContainerAllocator>
struct Definition< ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator> > {
  static const char* value() {
    return "# This represents an estimated twist with reference coordinate frame and "
           "timestamp.\n"
           "Header header\n"
           "TwistWithCovariance twist\n"
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
           "# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called "
           "'secs')\n"
           "# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called "
           "'nsecs')\n"
           "# time-handling sugar is provided by the client library\n"
           "time stamp\n"
           "#Frame this data is associated with\n"
           "string frame_id\n"
           "\n"
           "================================================================================\n"
           "MSG: geometry_msgs/TwistWithCovariance\n"
           "# This expresses velocity in free space with uncertainty.\n"
           "\n"
           "Twist twist\n"
           "\n"
           "# Row-major representation of the 6x6 covariance matrix\n"
           "# The orientation parameters use a fixed-axis representation.\n"
           "# In order, the parameters are:\n"
           "# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n"
           "float64[36] covariance\n"
           "\n"
           "================================================================================\n"
           "MSG: geometry_msgs/Twist\n"
           "# This expresses velocity in free space broken into its linear and angular "
           "parts.\n"
           "Vector3  linear\n"
           "Vector3  angular\n"
           "\n"
           "================================================================================\n"
           "MSG: geometry_msgs/Vector3\n"
           "# This represents a vector in free space. \n"
           "# It is only meant to represent a direction. Therefore, it does not\n"
           "# make sense to apply a translation to it (e.g., when applying a \n"
           "# generic rigid transformation to a Vector3, tf2 will only apply the\n"
           "# rotation). If you want your data to be translatable too, use the\n"
           "# geometry_msgs/Point message instead.\n"
           "\n"
           "float64 x\n"
           "float64 y\n"
           "float64 z\n";
  }

  static const char* value(
      const ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator>&) {
    return value();
  }
};

}  // namespace message_traits
}  // namespace ros

namespace ros {
namespace serialization {

template <class ContainerAllocator>
struct Serializer< ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator> > {
  template <typename Stream, typename T>
  inline static void allInOne(Stream& stream, T m) {
    stream.next(m.header);
    stream.next(m.twist);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER
};  // struct TwistWithCovarianceStamped_

}  // namespace serialization
}  // namespace ros

namespace ros {
namespace message_operations {

template <class ContainerAllocator>
struct Printer< ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator> > {
  template <typename Stream>
  static void stream(
      Stream& s, const std::string& indent,
      const ::geometry_msgs::TwistWithCovarianceStamped_<ContainerAllocator>& v) {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "twist: ";
    s << std::endl;
    Printer< ::geometry_msgs::TwistWithCovariance_<ContainerAllocator> >::stream(
        s, indent + "  ", v.twist);
  }
};

}  // namespace message_operations
}  // namespace ros

#endif  // GEOMETRY_MSGS_MESSAGE_TWISTWITHCOVARIANCESTAMPED_H
