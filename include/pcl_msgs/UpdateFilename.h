// Generated by gencpp from file pcl_msgs/UpdateFilename.msg
// DO NOT EDIT!

#ifndef PCL_MSGS_MESSAGE_UPDATEFILENAME_H
#define PCL_MSGS_MESSAGE_UPDATEFILENAME_H

#include <ros/service_traits.h>

#include <pcl_msgs/UpdateFilenameRequest.h>
#include <pcl_msgs/UpdateFilenameResponse.h>

namespace pcl_msgs {

struct UpdateFilename {
  typedef UpdateFilenameRequest Request;
  typedef UpdateFilenameResponse Response;
  Request request;
  Response response;

  typedef Request RequestType;
  typedef Response ResponseType;

};  // struct UpdateFilename
}  // namespace pcl_msgs

namespace ros {
namespace service_traits {

template <>
struct MD5Sum< ::pcl_msgs::UpdateFilename> {
  static const char* value() { return "93a4bc4c60dc17e2a69e3fcaaa25d69d"; }

  static const char* value(const ::pcl_msgs::UpdateFilename&) { return value(); }
};

template <>
struct DataType< ::pcl_msgs::UpdateFilename> {
  static const char* value() { return "pcl_msgs/UpdateFilename"; }

  static const char* value(const ::pcl_msgs::UpdateFilename&) { return value(); }
};

// service_traits::MD5Sum< ::pcl_msgs::UpdateFilenameRequest> should match
// service_traits::MD5Sum< ::pcl_msgs::UpdateFilename >
template <>
struct MD5Sum< ::pcl_msgs::UpdateFilenameRequest> {
  static const char* value() { return MD5Sum< ::pcl_msgs::UpdateFilename>::value(); }
  static const char* value(const ::pcl_msgs::UpdateFilenameRequest&) { return value(); }
};

// service_traits::DataType< ::pcl_msgs::UpdateFilenameRequest> should match
// service_traits::DataType< ::pcl_msgs::UpdateFilename >
template <>
struct DataType< ::pcl_msgs::UpdateFilenameRequest> {
  static const char* value() { return DataType< ::pcl_msgs::UpdateFilename>::value(); }
  static const char* value(const ::pcl_msgs::UpdateFilenameRequest&) { return value(); }
};

// service_traits::MD5Sum< ::pcl_msgs::UpdateFilenameResponse> should match
// service_traits::MD5Sum< ::pcl_msgs::UpdateFilename >
template <>
struct MD5Sum< ::pcl_msgs::UpdateFilenameResponse> {
  static const char* value() { return MD5Sum< ::pcl_msgs::UpdateFilename>::value(); }
  static const char* value(const ::pcl_msgs::UpdateFilenameResponse&) { return value(); }
};

// service_traits::DataType< ::pcl_msgs::UpdateFilenameResponse> should match
// service_traits::DataType< ::pcl_msgs::UpdateFilename >
template <>
struct DataType< ::pcl_msgs::UpdateFilenameResponse> {
  static const char* value() { return DataType< ::pcl_msgs::UpdateFilename>::value(); }
  static const char* value(const ::pcl_msgs::UpdateFilenameResponse&) { return value(); }
};

}  // namespace service_traits
}  // namespace ros

#endif  // PCL_MSGS_MESSAGE_UPDATEFILENAME_H
