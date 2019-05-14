// Generated by gencpp from file duckietown_msgs/MaintenanceState.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_MAINTENANCESTATE_H
#define DUCKIETOWN_MSGS_MESSAGE_MAINTENANCESTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace duckietown_msgs
{
template <class ContainerAllocator>
struct MaintenanceState_
{
  typedef MaintenanceState_<ContainerAllocator> Type;

  MaintenanceState_()
    : state()  {
    }
  MaintenanceState_(const ContainerAllocator& _alloc)
    : state(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _state_type;
  _state_type state;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  WAY_TO_MAINTENANCE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  WAY_TO_CHARGING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CHARGING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  WAY_TO_CALIBRATING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CALIBRATING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  WAY_TO_CITY;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  NONE;

  typedef boost::shared_ptr< ::duckietown_msgs::MaintenanceState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::MaintenanceState_<ContainerAllocator> const> ConstPtr;

}; // struct MaintenanceState_

typedef ::duckietown_msgs::MaintenanceState_<std::allocator<void> > MaintenanceState;

typedef boost::shared_ptr< ::duckietown_msgs::MaintenanceState > MaintenanceStatePtr;
typedef boost::shared_ptr< ::duckietown_msgs::MaintenanceState const> MaintenanceStateConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      MaintenanceState_<ContainerAllocator>::WAY_TO_MAINTENANCE =
        
          "\"WAY_TO_MAINTENANCE\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      MaintenanceState_<ContainerAllocator>::WAY_TO_CHARGING =
        
          "\"WAY_TO_CHARGING\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      MaintenanceState_<ContainerAllocator>::CHARGING =
        
          "\"CHARGING\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      MaintenanceState_<ContainerAllocator>::WAY_TO_CALIBRATING =
        
          "\"WAY_TO_CALIBRATING\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      MaintenanceState_<ContainerAllocator>::CALIBRATING =
        
          "\"CALIBRATING\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      MaintenanceState_<ContainerAllocator>::WAY_TO_CITY =
        
          "\"WAY_TO_CITY\""
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      MaintenanceState_<ContainerAllocator>::NONE =
        
          "\"NONE\""
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::MaintenanceState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::MaintenanceState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'duckietown_msgs': ['/home/irakli/objdt-duckiebot-ros/src/duckietown_msgs/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::MaintenanceState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::MaintenanceState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::MaintenanceState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::MaintenanceState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::MaintenanceState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::MaintenanceState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::MaintenanceState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "076259ec4d51665ce2a0b26c9055f2df";
  }

  static const char* value(const ::duckietown_msgs::MaintenanceState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x076259ec4d51665cULL;
  static const uint64_t static_value2 = 0xe2a0b26c9055f2dfULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::MaintenanceState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/MaintenanceState";
  }

  static const char* value(const ::duckietown_msgs::MaintenanceState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::MaintenanceState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#Header header\n"
"string state\n"
"\n"
"# pseudo constants\n"
"string WAY_TO_MAINTENANCE=\"WAY_TO_MAINTENANCE\"\n"
"string WAY_TO_CHARGING=\"WAY_TO_CHARGING\"\n"
"string CHARGING=\"CHARGING\"\n"
"string WAY_TO_CALIBRATING=\"WAY_TO_CALIBRATING\"	\n"
"string CALIBRATING=\"CALIBRATING\"	\n"
"string WAY_TO_CITY=\"WAY_TO_CITY\"\n"
"string NONE=\"NONE\"\n"
;
  }

  static const char* value(const ::duckietown_msgs::MaintenanceState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::MaintenanceState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MaintenanceState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::MaintenanceState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::MaintenanceState_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_MAINTENANCESTATE_H
