#include <sycl/sycl.hpp>
#include <iostream>
#include <vector>
#include <sstream>

void print_device_info(const sycl::device& device) {
    std::ostringstream oss;

    oss << "Platform: " << device.get_info<sycl::info::device::platform>().get_info<sycl::info::platform::name>() << "  |  "
        << "Device Name: " << device.get_info<sycl::info::device::name>() << "\n";
    oss << "Driver Version: " << device.get_info<sycl::info::device::driver_version>() << "\n";
    oss << "Profile: " << device.get_info<sycl::info::device::profile>() << "\n";
    oss << "Device Version: " << device.get_info<sycl::info::device::version>() << "\n";
    oss << "Backend Version: " << device.get_info<sycl::info::device::backend_version>() << "\n";
    oss << "Vendor: " << device.get_info<sycl::info::device::vendor>() << "\n";
    oss << "Vendor ID: " << device.get_info<sycl::info::device::vendor_id>() << "\n";
    oss << "Max Compute Units: " << device.get_info<sycl::info::device::max_compute_units>() << "\n";
    oss << "Max Work Item Dimensions: " << device.get_info<sycl::info::device::max_work_item_dimensions>() << "\n";

    oss << "Max Work Group Size: " << device.get_info<sycl::info::device::max_work_group_size>() << "\n";
    
    oss << "Preferred Vector Width (char): " << device.get_info<sycl::info::device::preferred_vector_width_char>() << "\n";
    oss << "Preferred Vector Width (short): " << device.get_info<sycl::info::device::preferred_vector_width_short>() << "\n";
    oss << "Preferred Vector Width (int): " << device.get_info<sycl::info::device::preferred_vector_width_int>() << "\n";
    oss << "Preferred Vector Width (long): " << device.get_info<sycl::info::device::preferred_vector_width_long>() << "\n";
    oss << "Preferred Vector Width (float): " << device.get_info<sycl::info::device::preferred_vector_width_float>() << "\n";
    oss << "Preferred Vector Width (double): " << device.get_info<sycl::info::device::preferred_vector_width_double>() << "\n";
    oss << "Preferred Vector Width (half): " << device.get_info<sycl::info::device::preferred_vector_width_half>() << "\n";
    
    oss << "Native Vector Width (char): " << device.get_info<sycl::info::device::native_vector_width_char>() << "\n";
    oss << "Native Vector Width (short): " << device.get_info<sycl::info::device::native_vector_width_short>() << "\n";
    oss << "Native Vector Width (int): " << device.get_info<sycl::info::device::native_vector_width_int>() << "\n";
    oss << "Native Vector Width (long): " << device.get_info<sycl::info::device::native_vector_width_long>() << "\n";
    oss << "Native Vector Width (float): " << device.get_info<sycl::info::device::native_vector_width_float>() << "\n";
    oss << "Native Vector Width (double): " << device.get_info<sycl::info::device::native_vector_width_double>() << "\n";
    oss << "Native Vector Width (half): " << device.get_info<sycl::info::device::native_vector_width_half>() << "\n";
    
    oss << "Max Clock Frequency: " << device.get_info<sycl::info::device::max_clock_frequency>() << "\n";
    oss << "Address Bits: " << device.get_info<sycl::info::device::address_bits>() << "\n";
    oss << "Max Mem Alloc Size: " << device.get_info<sycl::info::device::max_mem_alloc_size>() << "\n";
    
    oss << "Max Read Image Args: " << device.get_info<sycl::info::device::max_read_image_args>() << "\n";
    oss << "Max Write Image Args: " << device.get_info<sycl::info::device::max_write_image_args>() << "\n";
    oss << "Image2D Max Height: " << device.get_info<sycl::info::device::image2d_max_height>() << "\n";
    oss << "Image2D Max Width: " << device.get_info<sycl::info::device::image2d_max_width>() << "\n";
    oss << "Image3D Max Height: " << device.get_info<sycl::info::device::image3d_max_height>() << "\n";
    oss << "Image3D Max Width: " << device.get_info<sycl::info::device::image3d_max_width>() << "\n";
    oss << "Image3D Max Depth: " << device.get_info<sycl::info::device::image3d_max_depth>() << "\n";
    oss << "Image Max Buffer Size: " << device.get_info<sycl::info::device::image_max_buffer_size>() << "\n";
    
    oss << "Max Samplers: " << device.get_info<sycl::info::device::max_samplers>() << "\n";
    oss << "Max Parameter Size: " << device.get_info<sycl::info::device::max_parameter_size>() << "\n";
    oss << "Mem Base Addr Align: " << device.get_info<sycl::info::device::mem_base_addr_align>() << "\n";
    
    oss << "Global Mem Cache Size: " << device.get_info<sycl::info::device::global_mem_cache_size>() << "\n";
    oss << "Global Mem Size: " << device.get_info<sycl::info::device::global_mem_size>() << "\n";
    
    oss << "Local Mem Size: " << device.get_info<sycl::info::device::local_mem_size>() << "\n";
    
    oss << "Error Correction Support: " << device.get_info<sycl::info::device::error_correction_support>() << "\n";
    oss << "Host Unified Memory: " << device.get_info<sycl::info::device::host_unified_memory>() << "\n";
    
    oss << "Profiling Timer Resolution: " << device.get_info<sycl::info::device::profiling_timer_resolution>() << "\n";
    oss << "Is Endian Little: " << device.get_info<sycl::info::device::is_endian_little>() << "\n";
    oss << "Is Available: " << device.get_info<sycl::info::device::is_available>() << "\n";
    
    oss << "Printf Buffer Size: " << device.get_info<sycl::info::device::printf_buffer_size>() << "\n";
    oss << "Preferred Interop User Sync: " << device.get_info<sycl::info::device::preferred_interop_user_sync>() << "\n";
    
    oss << "Partition Max Sub Devices: " << device.get_info<sycl::info::device::partition_max_sub_devices>() << "\n";
    oss << "--------------------------------------------\n";
    
    std::cout << oss.str();
}


int main() {
    auto platforms = sycl::platform::get_platforms();
    std::vector<sycl::device> all_devices;
    int device_index = 0;

    std::cout << "Available SYCL Devices:\n";

    for (const auto& platform : platforms) {
        auto devices = platform.get_devices();
        for (const auto& device : devices) {
            std::cout << "[" << device_index << "] "
                      << device.get_info<sycl::info::device::name>() << " | "
                      << platform.get_info<sycl::info::platform::name>() << "\n";
            all_devices.push_back(device);
            ++device_index;
        }
    }

    std::cout << "\nEnter the device index you want details for: ";
    int choice = -1;
    std::cin >> choice;

    if (choice >= 0 && choice < static_cast<int>(all_devices.size())) {
        std::cout << "\nSelected Device Info:\n";
        print_device_info(all_devices[choice]);
    } else {
        std::cerr << "Invalid device index.\n";
    }

    return 0;
}
