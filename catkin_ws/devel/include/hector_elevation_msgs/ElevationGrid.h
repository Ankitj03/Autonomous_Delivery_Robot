// Generated by gencpp from file hector_elevation_msgs/ElevationGrid.msg
// DO NOT EDIT!


#ifndef HECTOR_ELEVATION_MSGS_MESSAGE_ELEVATIONGRID_H
#define HECTOR_ELEVATION_MSGS_MESSAGE_ELEVATIONGRID_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <hector_elevation_msgs/ElevationMapMetaData.h>

namespace hector_elevation_msgs
{
template <class ContainerAllocator>
struct ElevationGrid_
{
  typedef ElevationGrid_<ContainerAllocator> Type;

  ElevationGrid_()
    : header()
    , info()
    , data()  {
    }
  ElevationGrid_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , info(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::hector_elevation_msgs::ElevationMapMetaData_<ContainerAllocator>  _info_type;
  _info_type info;

   typedef std::vector<int16_t, typename ContainerAllocator::template rebind<int16_t>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::hector_elevation_msgs::ElevationGrid_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hector_elevation_msgs::ElevationGrid_<ContainerAllocator> const> ConstPtr;

}; // struct ElevationGrid_

typedef ::hector_elevation_msgs::ElevationGrid_<std::allocator<void> > ElevationGrid;

typedef boost::shared_ptr< ::hector_elevation_msgs::ElevationGrid > ElevationGridPtr;
typedef boost::shared_ptr< ::hector_elevation_msgs::ElevationGrid const> ElevationGridConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hector_elevation_msgs::ElevationGrid_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hector_elevation_msgs::ElevationGrid_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hector_elevation_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'hector_elevation_msgs': ['/home/nvidia/catkin_ws/src/hector_navigation/hector_elevation_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hector_elevation_msgs::ElevationGrid_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hector_elevation_msgs::ElevationGrid_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hector_elevation_msgs::ElevationGrid_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hector_elevation_msgs::ElevationGrid_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hector_elevation_msgs::ElevationGrid_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hector_elevation_msgs::ElevationGrid_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hector_elevation_msgs::ElevationGrid_<ContainerAllocator> >
{
  static const char* value()
  {
    return "13f6dd2a4434f89ebecd8bfafa38cdf1";
  }

  static const char* value(const ::hector_elevation_msgs::ElevationGrid_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x13f6dd2a4434f89eULL;
  static const uint64_t static_value2 = 0xbecd8bfafa38cdf1ULL;
};

template<class ContainerAllocator>
struct DataType< ::hector_elevation_msgs::ElevationGrid_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hector_elevation_msgs/ElevationGrid";
  }

  static const char* value(const ::hector_elevation_msgs::ElevationGrid_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hector_elevation_msgs::ElevationGrid_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This represents a 2-D grid map, in which each cell represents the elevation.\n"
"\n"
"Header header \n"
"\n"
"#MetaData for the map\n"
"ElevationMapMetaData info\n"
"\n"
"# The map data, in row-major order, starting with (0,0).  Elevation values \n"
"# are in the range [0,32768].\n"
"# -> 0 belongs to max negative elevation, 32767 to max positive elevation, \"elevation_zero_level\" coresponds to zero, -elevation_zero_level to unknown elevation\n"
"int16[] data\n"
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
"MSG: hector_elevation_msgs/ElevationMapMetaData\n"
"# This hold basic information about the characterists of the EvaluationGrid\n"
"\n"
"# The time at which the map was loaded\n"
"time map_load_time\n"
"# Map resolution in xy plane [m/cell]\n"
"float64 resolution_xy\n"
"# Map resolution in height [m/cell]\n"
"float64 resolution_z\n"
"# min observed height [m]\n"
"float64 min_elevation\n"
"# max observed height [m]\n"
"float64 max_elevation\n"
"# Height zero value. For example 16384.\n"
"int16 zero_elevation\n"
"# Map width [cells]\n"
"uint32 width\n"
"# Map height [cells]\n"
"uint32 height\n"
"# The origin of the map [m, m, rad].  This is the real-world pose of the\n"
"# cell (0,0) in the map.\n"
"geometry_msgs/Pose origin\n"
"\n"
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

  static const char* value(const ::hector_elevation_msgs::ElevationGrid_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hector_elevation_msgs::ElevationGrid_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.info);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ElevationGrid_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hector_elevation_msgs::ElevationGrid_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hector_elevation_msgs::ElevationGrid_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "info: ";
    s << std::endl;
    Printer< ::hector_elevation_msgs::ElevationMapMetaData_<ContainerAllocator> >::stream(s, indent + "  ", v.info);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // HECTOR_ELEVATION_MSGS_MESSAGE_ELEVATIONGRID_H
