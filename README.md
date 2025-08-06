# SYCL Info Tool

`syclinfo` is a lightweight command-line utility written in C++ using the SYCL programming model. It queries and displays detailed information about available SYCL devices on your system — perfect for developers working with Intel GPUs and the oneAPI ecosystem.

---

## 🚀 Features

- Lists all available SYCL-compatible devices.
- Allows user to select a device by index and view detailed device info.
- Supports Level-Zero and OpenCL backends under Intel oneAPI.

---

## 🔧 Build Instructions

### 1. Prerequisites

- **Intel oneAPI Base Toolkit** (make sure it includes the DPC++ compiler).
- A supported SYCL device (e.g. Intel GPU, iGPU or CPU).

### 2. Clone the Repository

```bash
git clone https://github.com/your-username/syclinfo.git syclinfo
cd syclinfo
```

### 3. Set Up oneAPI Environment
Before building, source the oneAPI environment script (adjust the path based on your installation):

Linux(terminal):
bash
```bash
source /opt/intel/oneapi/setvars.sh
```
Windows (Command Prompt):
```shell
"C:\Program Files (x86)\Intel\oneAPI\setvars.bat"
```

### 4. Compile
Use the Intel DPC++ compiler (icx) to build:

```bash
icx -fsycl syclinfo.cpp -o syclinfo.exe
```


### 🧪 Usage
Run the executable:
```bash
./syclinfo.exe
```
### You will be prompted to select a device. Example output:
```bash
Available SYCL Devices:
[0] Intel(R) Iris(R) Xe Graphics | Intel(R) oneAPI Unified Runtime over Level-Zero
[1] Intel(R) Iris(R) Xe Graphics | Intel(R) OpenCL Graphics
[2] 11th Gen Intel(R) Core(TM) i5-1135G7 @ 2.40GHz | Intel(R) OpenCL
[3] 11th Gen Intel(R) Core(TM) i5-1135G7 @ 2.40GHz | Intel(R) OpenCL
[4] 11th Gen Intel(R) Core(TM) i5-1135G7 @ 2.40GHz | Intel(R) OpenCL

Enter the device index you want details for: 0

Selected Device Info:
Platform: Intel(R) oneAPI Unified Runtime over Level-Zero  |  Device Name: Intel(R) Iris(R) Xe Graphics
Driver Version: 1.6.33890
Profile: FULL_PROFILE
Device Version: 12.0.0
Backend Version: 1.6.33890
Vendor: Intel(R) Corporation
Vendor ID: 32902
Max Compute Units: 80
Max Work Item Dimensions: 3
Max Work Group Size: 512
Preferred Vector Width (char): 8
Preferred Vector Width (short): 4
Preferred Vector Width (int): 2
Preferred Vector Width (long): 1
Preferred Vector Width (float): 2
Preferred Vector Width (double): 1
Preferred Vector Width (half): 4
Native Vector Width (char): 8
Native Vector Width (short): 4
Native Vector Width (int): 2
Native Vector Width (long): 1
Native Vector Width (float): 2
Native Vector Width (double): 1
Native Vector Width (half): 4
Max Clock Frequency: 1300
Address Bits: 64
Max Mem Alloc Size: 4294959104
Max Read Image Args: 128
Max Write Image Args: 128
Image2D Max Height: 16384
Image2D Max Width: 16384
Image3D Max Height: 2048
Image3D Max Width: 2048
Image3D Max Depth: 2048
Image Max Buffer Size: 268434944
Max Samplers: 16
Max Parameter Size: 2048
Mem Base Addr Align: 8
Global Mem Cache Size: 2949120
Global Mem Size: 5407866880
Local Mem Size: 65536
Error Correction Support: 0
Host Unified Memory: 1
Profiling Timer Resolution: 52
Is Endian Little: 1
Is Available: 1
Printf Buffer Size: 4194304
Preferred Interop User Sync: 1
Partition Max Sub Devices: 0
--------------------------------------------
```
You'll then get a full report of the selected device, including:

- Compute capabilities
- Memory configuration
- Vector widths
- Feature support (e.g. FP16, unified memory)

###📄 License
This project is licensed under the GNU General Public License v3.0.
You can find the full license text in LICENSE, or read it online at:
https://www.gnu.org/licenses/gpl-3.0.en.html

🤝 Contributing
Feel free to open issues or submit pull requests. Improvements and feature ideas are always welcome!

✨ Author
Contrad Namiseb
C++ + SYCL enthusiast from Namibia 🇳🇦

### GNU GENERAL PUBLIC LICENSE
Version 3, 29 June 2007

Copyright (C) 2025 Contrad Namiseb

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see https://www.gnu.org/licenses/






