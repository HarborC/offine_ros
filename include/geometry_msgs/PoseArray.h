// Generated by gencpp from file geometry_msgs/PoseArray.msg
// DO NOT EDIT!

#ifndef GEOMETRY_MSGS_MESSAGE_POSEARRAY_H
#define GEOMETRY_MSGS_MESSAGE_POSEARRAY_H

#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>

namespace geometry_msgs {
template <class ContainerAllocator>
struct PoseArray_ {
  typedef PoseArray_<ContainerAllocator> Type;

  PoseArray_() : header(), poses() {}
  PoseArray_(const ContainerAllocator& _alloc) : header(_alloc), poses(_alloc) {
    (void)_alloc;
  }

  typedef ::std_msgs::Header_<ContainerAllocator> _header_type;
  _header_type header;

  typedef std::vector<::geometry_msgs::Pose_<ContainerAllocator>,
                      typename std::allocator_traits<ContainerAllocator>::
                          template rebind_alloc<::geometry_msgs::Pose_<ContainerAllocator>>>
      _poses_type;
  _poses_type poses;

  typedef boost::shared_ptr<::geometry_msgs::PoseArray_<ContainerAllocator>> Ptr;
  typedef boost::shared_ptr<::geometry_msgs::PoseArray_<ContainerAllocator> const> ConstPtr;

};  // struct PoseArray_

typedef ::geometry_msgs::PoseArray_<std::allocator<void>> PoseArray;

typedef boost::shared_ptr<::geometry_msgs::PoseArray> PoseArrayPtr;
typedef boost::shared_ptr<::geometry_msgs::PoseArray const> PoseArrayConstPtr;

// constants requiring out of line definition

template <typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s,
                         const ::geometry_msgs::PoseArray_<ContainerAllocator>& v) {
  ros::message_operations::Printer<::geometry_msgs::PoseArray_<ContainerAllocator>>::stream(
      s, "", v);
  return s;
}

template <typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::geometry_msgs::PoseArray_<ContainerAllocator1>& lhs,
                const ::geometry_msgs::PoseArray_<ContainerAllocator2>& rhs) {
  return lhs.header == rhs.header && lhs.poses == rhs.poses;
}

template <typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::geometry_msgs::PoseArray_<ContainerAllocator1>& lhs,
                const ::geometry_msgs::PoseArray_<ContainerAllocator2>& rhs) {
  return !(lhs == rhs);
}

}  // namespace geometry_msgs

namespace ros {
namespace message_traits {

template <class ContainerAllocator>
struct IsMessage<::geometry_msgs::PoseArray_<ContainerAllocator>> : TrueType {};

template <class ContainerAllocator>
struct IsMessage<::geometry_msgs::PoseArray_<ContainerAllocator> const> : TrueType {};

template <class ContainerAllocator>
struct IsFixedSize<::geometry_msgs::PoseArray_<ContainerAllocator>> : FalseType {};

template <class ContainerAllocator>
struct IsFixedSize<::geometry_msgs::PoseArray_<ContainerAllocator> const> : FalseType {};

template <class ContainerAllocator>
struct HasHeader<::geometry_msgs::PoseArray_<ContainerAllocator>> : TrueType {};

template <class ContainerAllocator>
struct HasHeader<::geometry_msgs::PoseArray_<ContainerAllocator> const> : TrueType {};

template <class ContainerAllocator>
struct MD5Sum<::geometry_msgs::PoseArray_<ContainerAllocator>> {
  static const char* value() { return "916c28c5764443f268b296bb671b9d97"; }

  static const char* value(const ::geometry_msgs::PoseArray_<ContainerAllocator>&) {
    return value();
  }
  static const uint64_t static_value1 = 0x916c28c5764443f2ULL;
  static const uint64_t static_value2 = 0x68b296bb671b9d97ULL;
};

template <class ContainerAllocator>
struct DataType<::geometry_msgs::PoseArray_<ContainerAllocator>> {
  static const char* value() { return "geometry_msgs/PoseArray"; }

  static const char* value(const ::geometry_msgs::PoseArray_<ContainerAllocator>&) {
    return value();
  }
};

template <class ContainerAllocator>
struct Definition<::geometry_msgs::PoseArray_<ContainerAllocator>> {
  static const char* value() {
    return "# An array of poses with a header for global reference.\n"
           "\n"
           "Header header\n"
           "\n"
           "Pose[] poses\n"
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
           "float64 w\n";
  }

  static const char* value(const ::geometry_msgs::PoseArray_<ContainerAllocator>&) {
    return value();
  }
};

}  // namespace message_traits
}  // namespace ros

namespace ros {
namespace serialization {

template <class ContainerAllocator>
struct Serializer<::geometry_msgs::PoseArray_<ContainerAllocator>> {
  template <typename Stream, typename T>
  inline static void allInOne(Stream& stream, T m) {
    stream.next(m.header);
    stream.next(m.poses);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER
};  // struct PoseArray_

}  // namespace serialization
}  // namespace ros

namespace ros {
namespace message_operations {

template <class ContainerAllocator>
struct Printer<::geometry_msgs::PoseArray_<ContainerAllocator>> {
  template <typename Stream>
  static void stream(Stream& s, const std::string& indent,
                     const ::geometry_msgs::PoseArray_<ContainerAllocator>& v) {
    s << indent << "header: ";
    s << std::endl;
    Printer<::std_msgs::Header_<ContainerAllocator>>::stream(s, indent + "  ", v.header);
    s << indent << "poses[]" << std::endl;
    for (size_t i = 0; i < v.poses.size(); ++i) {
      s << indent << "  poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer<::geometry_msgs::Pose_<ContainerAllocator>>::stream(s, indent + "    ",
                                                                  v.poses[i]);
    }
  }
};

}  // namespace message_operations
}  // namespace ros

#endif  // GEOMETRY_MSGS_MESSAGE_POSEARRAY_H
