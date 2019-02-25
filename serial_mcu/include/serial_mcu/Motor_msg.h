// Generated by gencpp from file serial_mcu/Motor_msg.msg
// DO NOT EDIT!


#ifndef SERIAL_MCU_MESSAGE_MOTOR_MSG_H
#define SERIAL_MCU_MESSAGE_MOTOR_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace serial_mcu
{
template <class ContainerAllocator>
struct Motor_msg_
{
  typedef Motor_msg_<ContainerAllocator> Type;

  Motor_msg_()
    : length(0)
    , mode(0)
    , id()
    , speed()
    , position()
    , type()
    , acceleration()  {
    }
  Motor_msg_(const ContainerAllocator& _alloc)
    : length(0)
    , mode(0)
    , id(_alloc)
    , speed(_alloc)
    , position(_alloc)
    , type(_alloc)
    , acceleration(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _length_type;
  _length_type length;

   typedef int32_t _mode_type;
  _mode_type mode;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _id_type;
  _id_type id;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _speed_type;
  _speed_type speed;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _position_type;
  _position_type position;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _type_type;
  _type_type type;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _acceleration_type;
  _acceleration_type acceleration;





  typedef boost::shared_ptr< ::serial_mcu::Motor_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::serial_mcu::Motor_msg_<ContainerAllocator> const> ConstPtr;

}; // struct Motor_msg_

typedef ::serial_mcu::Motor_msg_<std::allocator<void> > Motor_msg;

typedef boost::shared_ptr< ::serial_mcu::Motor_msg > Motor_msgPtr;
typedef boost::shared_ptr< ::serial_mcu::Motor_msg const> Motor_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::serial_mcu::Motor_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::serial_mcu::Motor_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace serial_mcu

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'serial_mcu': ['/home/robit/catkin_ws/src/serial_mcu/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::serial_mcu::Motor_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::serial_mcu::Motor_msg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::serial_mcu::Motor_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::serial_mcu::Motor_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::serial_mcu::Motor_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::serial_mcu::Motor_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::serial_mcu::Motor_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5f00266e19a84bc6741bc79f8307ce7b";
  }

  static const char* value(const ::serial_mcu::Motor_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5f00266e19a84bc6ULL;
  static const uint64_t static_value2 = 0x741bc79f8307ce7bULL;
};

template<class ContainerAllocator>
struct DataType< ::serial_mcu::Motor_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "serial_mcu/Motor_msg";
  }

  static const char* value(const ::serial_mcu::Motor_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::serial_mcu::Motor_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 length\n\
int32 mode\n\
int32[] id\n\
int32[] speed\n\
int32[] position\n\
int32[] type\n\
int32[] acceleration\n\
";
  }

  static const char* value(const ::serial_mcu::Motor_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::serial_mcu::Motor_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.length);
      stream.next(m.mode);
      stream.next(m.id);
      stream.next(m.speed);
      stream.next(m.position);
      stream.next(m.type);
      stream.next(m.acceleration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Motor_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::serial_mcu::Motor_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::serial_mcu::Motor_msg_<ContainerAllocator>& v)
  {
    s << indent << "length: ";
    Printer<int32_t>::stream(s, indent + "  ", v.length);
    s << indent << "mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mode);
    s << indent << "id[]" << std::endl;
    for (size_t i = 0; i < v.id.size(); ++i)
    {
      s << indent << "  id[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.id[i]);
    }
    s << indent << "speed[]" << std::endl;
    for (size_t i = 0; i < v.speed.size(); ++i)
    {
      s << indent << "  speed[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.speed[i]);
    }
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.position[i]);
    }
    s << indent << "type[]" << std::endl;
    for (size_t i = 0; i < v.type.size(); ++i)
    {
      s << indent << "  type[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.type[i]);
    }
    s << indent << "acceleration[]" << std::endl;
    for (size_t i = 0; i < v.acceleration.size(); ++i)
    {
      s << indent << "  acceleration[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.acceleration[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERIAL_MCU_MESSAGE_MOTOR_MSG_H
