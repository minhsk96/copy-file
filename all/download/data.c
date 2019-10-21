build 8953:
source build/envsetup.sh
export JACK_SERVER_VM_ARGUMENTS="-Dfile.encoding=UTF-8 -XX:+TieredCompilation -Xmx4096m"
./prebuilts/sdk/tools/jack-admin kill-server
./prebuilts/sdk/tools/jack-admin start-server
choosecombo 2 msm8953_64 3
choosecombo 1 msm8953_64 1
choosecombo 1 msm8953_64 2
choosecombo 1 msm8953_64 3

choosecombo 1 sdm660_64 2

choosecombo 1 sdm660_64 1


choosecombo 1 msm8974 1 4
choosecombo 2 msm8974 3 4
choosecombo 2 sdm660_64 3

java -jar ./prebuilt-apps-tool.jar -p sdm660_64 -c generate_links /media/thanh/aosp/5bphone3_8.1.0_r21

java -jar ./prebuilt-apps-tool.jar -p msm8953_64 -c generate_links /media/xxx/bf7ed47b-cbe2-43c9-94ee-fa21aafa3170/home/duongvh/B2017-8.1.0_r21/

TP-LINK_DBE2
Wireless@2018

sdt kevin: 0919363256

BSH-OS Pass6543210

sudo update-alternatives --config jav
make -j4

make update-android-test-mock-api && make -j4

make otapackage -j4
make cts -j4 TARGET_PRODUCT=msm8974

choosecombo 2 msm8998 3
choosecombo 1 msm8998 1

sudo apt-get install jackd qjackctl
sudo apt-get install jack-tools
sudo apt-get install bison
sudo apt-get install libssl-dev

adb logcat | grep -in -E 'thanhltd|thuantv|bluetooth'

setup ccache:
export USE_CCACHE=1
export CCACHE_DIR=`pwd`/../.ccache
./prebuilts/misc/linux-x86/ccache/ccache -M 20G

grep -rn --include-dir="out" "java" *
grep -rn --include=\*.{cpp,h} "java"
grep -rn --include=\*.java "AndroidManifest.xml"

adb shell input keyevent 26

adb shell sendevent /dev/input/event0 0001 0074 00000001
adb shell sendevent /dev/input/event0 0000 0000 00000000
adb shell sendevent /dev/input/event0 0001 0074 00000000
adb shell sendevent /dev/input/event0 0000 0000 00000000

adb shell <<!
> adb shell sendevent /dev/input/event0 1 74 1
> adb shell sleep 1
> adb shell sendevent /dev/input/event0 1 74 0
> exit
> !

oxford dictionary: linux32 ./setup.sh
sudo apt install libgtk2.0-0:i386
sudo apt-get install libgtk2.0-0

repo init -u https://github.com/omnirom/android.git -b android-8.1

id code to create account on qualcomm web: 54186
thanhltd@bkav.com
Bkav@2013
server cua hao:
smb://10.2.64.46/
server cua anh dunglx:
smb://10.2.64.15
vao trang nay tim source: https://wiki.codeaurora.org/xwiki/bin/QAEP/release
https://wiki.codeaurora.org/xwiki/bin/QAEP/
repo init -u git://codeaurora.org/platform/manifest.git -b release -m LA.BF.1.1.1.c4-05100-8x74.0.xml --repo-url=git://codeaurora.org/tools/repo.git --repo-branch=caf-stable

smb://10.2.64.45 phibaby

de xuat bao da: https://bam.bkav.com


repo init -u ssh://thanhltd@bkav:29418/b2017/platform/manifest -b 2.0.0.1

repo init -u  ssh://thanhltd@bkav:29418/b2017/platform/manifest  -b 8.0.0_r9

  /data/data/
  /mnt/sdcard/Android/data/

 [VN/VNP]


Bkav123456a@
external
external/wpa_supplicant_8/wpa_supplicant/wnm_sta.c

make installclean

mmm frameworks/base/services/core; adb shell stop; adb remount; adb sync system; adb shell start
mmm vendor/qcom/proprietary/sensors/dsps/libhalsensors; adb shell stop; adb remount; adb sync system; adb shell start
mmm frameworks/base/cmds/bootanimation; adb shell stop; adb remount; adb sync system; adb shell start

mmm frameworks/base/packages/SystemUI; adb shell stop; adb remount; adb sync system; adb shell start

mmm system/core/doubletap; adb shell stop; adb remount; adb sync system; adb shell start
mmm vendor/qcom/proprietary/fastmmi; adb shell stop; adb remount; adb sync system; adb shell start
mmm frameworks/av/media/libstagefright; adb shell stop; adb remount; adb sync system; adb shell start
mmm vendor/qcom/proprietary/fastmmi/qmmi; adb shell stop; adb remount; adb sync system; adb shell start
mmm vendor/bsh/fingerprint/fingerprint_tac/normal; adb shell stop; adb remount; adb sync system; adb shell start
mmm vendor/qcom/proprietary/telephony-apps/NetworkSetting; adb shell stop; adb remount; adb sync system; adb shell start

mmm vendor/qcom/proprietary/fastmmi/AudioMachineApp; adb shell stop; adb remount; adb sync system; adb shell start

mmm vendor/qcom/proprietary/fastmmi/qmmi; adb shell stop; adb remount; adb sync vendor; adb shell start

adb shell stop  && adb root && sleep 5 && adb remount && adb shell mount -o rw,remount /vendor && adb sync vendor && adb shell start

mmm vendor/qcom/proprietary/fastmmi/qmmi; adb shell stop; adb remount; adb sync vendor; adb shell start

adb push system/priv-app/SystemUI/SystemUI.apk system/priv-app/SystemUI/ && adb push system/priv-app/SystemUI/oat/arm64/SystemUI.odex system/priv-app/SystemUI/oat/arm64/ && adb push system/priv-app/SystemUI/oat/arm64/SystemUI.vdex system/priv-app/SystemUI/oat/arm64/

adb shell rm -rf data/user/0/com.android.systemui/ data/user/0/com.android.systemui.theme.dark/



adb push system/priv-app/Launcher3/Launcher3.apk system/priv-app/Launcher3/ && adb push system/priv-app/Launcher3/oat/arm64/Launcher3.odex system/priv-app/Launcher3/oat/arm64/ && adb push system/priv-app/Launcher3/oat/arm64/Launcher3.vdex system/priv-app/Launcher3/oat/arm64/

adb shell rm -rf data/user/0/com.android.launcher3/

http://10.3.10.116:8080/#/c/8585/

adb push out/target/product/sdm660_64/vendor/app/Qmmi/Qmmi.apk /vendor/app/Qmmi/
rm -rf /data/user/0/com.qualcomm.qti.qmmi
===================================================MMI=====================================================
ban ko co bos 
git checkout 9eb18542d900217677fd1f8dc88fb7c5109046be

adb shell am start -n com.qualcomm.qti.qmmi/.framework.MainActivity
*#*#7664#*#*

adb shell am start -a android.settings.SETTINGS


dumpsys package | grep -i "com.android.settings" |grep Activity

dumpsys package | grep -i "bphone.bkav.com.audiomachineapp" |grep Activity

adb shell dumpsys package r

adb shell dumpsys activity broadcasts |grep -iE ".+\.[0-9A-Z_\-]+:$" |sort


adb shell am start -n bphone.bkav.com.audiomachineapp/.SpeakerActivity

adb shell am broadcast -a "com.bkav.speaker.Finish"

adb shell am start -n bphone.bkav.com.audiomachineapp/.ReceiverActivity

adb shell am broadcast -a "com.bkav.receiver.Finish"

adb shell am start -n bphone.bkav.com.audiomachineapp/.HeadsetSpeakerActivity

adb shell am broadcast -a "com.bkav.headsetspeaker.Finish"

adb shell am start -n bphone.bkav.com.audiomachineapp/.PrimaryMicActivity

adb shell am broadcast -a "com.bkav.primarymic.Finish"

adb shell am start -n bphone.bkav.com.audiomachineapp/.TopMicActivity

adb shell am broadcast -a "com.bkav.topmic.Finish"

adb shell am start -n bphone.bkav.com.audiomachineapp/.HeadsetMicActivity

adb shell am broadcast -a "com.bkav.headsetmic.Finish"

adb shell am start -n bphone.bkav.com.audiomachineapp/.VibratorActivity

adb shell am broadcast -a com.bkav.vibrator.Finish

adb pull /storage/emulated/0/response.wav


adb shell am start -n bphone.bkav.com.audiomachineapp/.MainActivity
adb shell am broadcast -a "com.bkav.audiotest.Speaker"
adb shell am broadcast -a "com.bkav.audiotest.Receiver"
adb shell am broadcast -a "com.bkav.audiotest.HeadsetSpeaker"
adb shell am broadcast -a "com.bkav.audiotest.PrimaryMic"
adb shell am broadcast -a "com.bkav.audiotest.TopMic"
adb shell am broadcast -a "com.bkav.audiotest.HeadsetMic"
adb shell am broadcast -a "com.bkav.audiotest.Vibrator"
adb shell am broadcast -a "com.bkav.audiotest.Finish"

adb shell am broadcast -a "com.bkav.activity.Finish"

adb logcat | grep "usecase->in_snd_device"


echo ffbm-02 > misc.img
adb reboot bootloader
fastboot flash misc misc.img
fastboot reboot

mm-audio-ftm -c system/vendor/etc/ftm_test_config -tc 1 -d 3 -v 75 -file /system/etc/mmi/qualsound.wav
mm-audio-ftm -c system/vendor/etc/ftm_test_config -tc 5 -d 3 -v 75 -file /system/etc/mmi/qualsound.wav

pm disable com.android.dialer

wav_check /data/FTM_AP/mic1_record.wav > /data/result_ho_mic.txt


/data/user/0/com.qualcomm.qti.qmmi/files/ui_default_res.xml
/data/user/0/com.qualcomm.qti.qmmi/files/ui_default.xml
rm -rf /data/user/0/com.qualcomm.qti.qmmi/files

Có thể điều khiển cho led flash sáng liên tục bằng lệnh sau:
Sang 2 led:
echo 0 > /sys/class/leds/led\:switch_0/brightness && \echo 0 > /sys/class/leds/led\:switch_1/brightness && \echo none > /sys/class/leds/led\:torch_0/trigger && \echo none > /sys/class/leds/led\:torch_1/trigger && \echo 255 > /sys/class/leds/led\:torch_0/brightness && \echo 255 > /sys/class/leds/led\:torch_1/brightness && \echo 1 > /sys/class/leds/led\:switch_0/brightness && \echo 1 > /sys/class/leds/led\:switch_1/brightness

Sang led vang:
echo 0 > /sys/class/leds/led\:switch_0/brightness && \echo 0 > /sys/class/leds/led\:switch_1/brightness && \echo none > /sys/class/leds/led\:torch_0/trigger && \echo none > /sys/class/leds/led\:torch_1/trigger && \echo 255 > /sys/class/leds/led\:torch_0/brightness && \echo 0 > /sys/class/leds/led\:torch_1/brightness && \echo 1 > /sys/class/leds/led\:switch_0/brightness && \echo 1 > /sys/class/leds/led\:switch_1/brightness

Sang led trang:
echo 0 > /sys/class/leds/led\:switch_0/brightness && \echo 0 > /sys/class/leds/led\:switch_1/brightness && \echo none > /sys/class/leds/led\:torch_0/trigger && \echo none > /sys/class/leds/led\:torch_1/trigger && \echo 0 > /sys/class/leds/led\:torch_0/brightness && \echo 255 > /sys/class/leds/led\:torch_1/brightness && \echo 1 > /sys/class/leds/led\:switch_0/brightness && \echo 1 > /sys/class/leds/led\:switch_1/brightness

off:
echo 0 > /sys/class/leds/led\:switch_0/brightness && \echo 0 > /sys/class/leds/led\:switch_1/brightness && \echo none > /sys/class/leds/led\:torch_0/trigger && \echo none > /sys/class/leds/led\:torch_1/trigger && \echo 0 > /sys/class/leds/led\:torch_0/brightness && \echo 0 > /sys/class/leds/led\:torch_1/brightness && \echo 1 > /sys/class/leds/led\:switch_0/brightness && \echo 1 > /sys/class/leds/led\:switch_1/brightness





adb wait-for-devices
adb root
adb wait-for-devices
adb shell settings list global | grep pref
This returned to me both "preferred_network_mode" and "preferred_network_mode1"

adb shell settings put global preferred_network_mode 1
adb shell settings put global preferred_network_mode1 1
adb shell stop ril-daemon
adb shell start ril-daemon





===================================================CAT LOOP======================================================
adb shell "while true;do cat /sys/devices/soc/soc:doubletap/irq;sleep 1;echo =====;done"

==================================================CTS GMS=======================================================
./android-cts/tools/cts-tradefed

adb remount; adb push /media/thanh/L/bphone1_5.1.0_234/out/target/product/msm8974/system/lib/libstagefright_wfd.so /system/lib/; adb shell sync

adb remount; adb push /media/thanh/L/bphone1_5.1.0_234/out/target/product/msm8974/system/lib/libstagefright.so /system/lib/; adb shell sync


run cts -c android.security.cts.StagefrightTest

run cts -c android.security.cts.AudioSecurityTest -m testAllEffectsEqualizer_CVE_2017_0401
run cts -c android.security.cts.StagefrightTest -m testStagefright_bug_21443020


run cts -c android.security.cts.StagefrightTest -m testStagefright_bug_23270724
run cts -c android.security.cts.StagefrightTest -m testStagefright_bug_34360591
run cts -c android.security.cts.StagefrightTest -m testStagefright_bug_65483665

testStagefright_bug_35763994

==========================================COVERT IMAGES BIT (16-24), (16-32)=====================================
Ultima is completely 16 bit based--meaning that each pixel is UWORD value that can be broken down as follows:
1 1 1 1 1 1                    
5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
U R R R R R G G G G G B B B B B
Where U=Unused, R=Red, G=Green and B=Blue

So, to convert to 32 bit:

Color32 = ( (((Color16 >> 10) & 0x1F) * 0xFF / 0x1F) |
((((Color16 >> 5) & 0x1F) * 0xFF / 0x1F) << 8) |
((( Color16 & 0x1F) * 0xFF / 0x1F) << 16));

/** DangNQ add function **/
void rgb565_to_rgb888_pixcel(char* in, char* out){
  uint16_t rgb565 = *(uint16_t*)in;
  out[2] = (rgb565 & 0x1F) * 0xFF / 0x1F;
  out[1] = ((rgb565 >> 5) & 0x1F) * 0xFF / 0x1F;
  out[0] = ((rgb565 >> 10) & 0x1F) * 0xFF / 0x1F;
}

void rgb565_to_rgb888(char* in, int32_t size, char* out){
  int32_t i = 0;
  for (i = 0; i < size; i += 2){
    rgb565_to_rgb888_pixcel(in, out);
    in += 2;
    out += 3;
  }
}

==========================================MOUNT PARTITION========================================================
adb shell mount -o rw,remount /;
adb shell su -c "mount -o rw,remount /";
push busybox vao system bin
busybox mount -o rw,remount firmware

=======================================ERROR==============================================================
segmentation fault: sua bang cach bo return ham, thay kieu tra ve tu int sang void

=============================Permission=====================================================================

/data/system/users/0/runtime-permissions.xml


=========================================ANDROID STUDIO ERROR==================================================
Error:Minimum supported Gradle version is 4.1. Current version is 2.14.1. If using the gradle wrapper, try editing the distributionUrl in /home/thanh/Downloads/PreferenceActivityDemo1/gradle/wrapper/gradle-wrapper.properties to gradle-4.1-all.zip

Consult IDE log for more details (Help | Show Log)

--------------> file/project structure/project and put the new version in gradle version

====================================SELINUX=====================================================================
audit2allow -i log.log
setenforce 0

=====================================SET LOCKSCREEN=====================================================
adb shell

athene_f:/ $ locksettings
usage: locksettings set-pattern [--old OLD_CREDENTIAL] NEW_PATTERN

   locksettings set-pin [--old OLD_CREDENTIAL] NEW_PIN
   locksettings set-password [--old OLD_CREDENTIAL] NEW_PASSWORD
   locksettings clear [--old OLD_CREDENTIAL]
   locksettings verify [--old OLD_CREDENTIAL]
   locksettings set-disabled DISABLED
   locksettings get-disabled
flags: --user USER_ID: specify the user, default value is current user

locksettings set-pin: sets a PIN

locksettings set-password: sets a password

locksettings clear: clears the unlock credential

locksettings verify: verifies the credential and unlocks the user

locksettings set-disabled: sets whether the lock screen should be disabled

locksettings get-disabled: retrieves whether the lock screen is disabled

and if you want to remove password just use below code .

 $ locksettings clear --old old_password_put_here
here is reference link :https://www.theandroidsoul.com/change-remove-lockscreen-pattern-pin-password-adb-android-oreo/


==================PHP==================================================================================

sudo /etc/init.d/apache2 stop
sudo /etc/init.d/mysql stop
sudo /etc/init.d/proftpd stop
sudo /opt/lampp/lampp start

sudo apt-get install sendmail
sudo sendmailconfig

http://localhost/phpmyadmin/
http://localhost/dashboard/phpinfo.php

The status of the response, xhr.status, is (generally) used to determine whether the 
request was successful or not.  xhr.readyState is simply used to determine the state of 
the request, such as "has not yet been sent" (0), "complete and response received" (4), 
etc.


// LOI THUONG DO KHAI BAO FILE INCLUDE TRONG "" SAI
The server is responsible for providing the status, while the user agent provides the readyState.

=========================================================================================================
BOOTANIMATION
Xoa 54 byte dau trong mang array gen tu HxDSetup tren window

system    858   1     9548   1996           0 7fb18bfb7c R /system/bin/doubletap
system    1766  855   13784  3056  poll_sched 7f7fba196c S fingerprintd


===================================RASPBERRY===================================================================
Connect your adb host computer and your android device to the same network.
Open Command Prompt/Terminal and start adb in TCP/IP mode with adb tcpip 5555.
Enable ADB over network in Settings>Developer Options>Debugging. ...
Grab the IP address of your phone from the screen above and enter adb connect 192.168.x.x.

adb root
adb connect 192.168.1.17
adb connect 10.2.80.87
adb remount
adb shell

================================================SENSOR===============================================================
Restart Sensors
adb shell stop sensors;
adb shell "echo 'related' > /sys/bus/msm_subsys/devices/subsys2/restart_level";
adb shell "echo 'restart' > /sys/kernel/debug/msm_subsys/adsp";
adb shell start sensors;

frameworks/base/tools/orientationplot/orientationplot.py

Disable Sensors
echo 0 > /persist/sensors/sensors_settings

adb shell cat d/rpm_stats

ERROR: loi co ban nhat dau –o => -o khi build non sensor

export HEXAGON_ROOT=/home/thanh/Qualcomm/HEXAGON_Tools
export HEXAGON_RTOS_RELEASE=5.1.05
export HEXAGON_Q6VERSION=v55
export HEXAGON_IMAGE_ENTRY=0x0840000
export PYTHON_PATH=/usr/bin/python2.7
export PATH=$PYTHON_PATH:$PATH 
python ./build/build.py -c msm8953 -o clean
python ./build/build.py -c msm8953 -o all


ban user chay lenh nay:
adb shell setprop sys.usb.config diag,serial_smd,rmnet_ipa,adb
b2017-nonhlos/ADSP.8953.2.8.2/adsp_proc/obj/8953/signed/LA/system/etc/firmware

adb logcat -v time Sensors:* libsensor1:* qti_sensors_hal:* QSensorTest:* *:S


adb root && adb wait-for-device
adb remount && adb pull /system/build.prop .
vi build.prop

<Make change to build.prop, add below to build.prop>
persist.debug.sensors.hal=1
debug.qualcomm.sns.daemon=1
debug.qualcomm.sns.libsensor1=1
<Make change to build.prop>
? adb push build.prop /system
? adb shell chmod 644 /system/build.prop
? adb shell sync
? adb reboot
? Collect the logs.
adb logcat -v time Sensors:* libsensor1:* qti_sensors_hal:* QSensorTest:* *:S
adb logcat -v time Sensors:* libsensor1:* *:S
adb logcat -v time ConnectivityService:* *:S
logcat -f logcat.txt *:S ConnectivityService:D


Here s an example of a filter expression that suppresses all log messages except those with the tag "ActivityManager", at priority "Info" or above, and all log messages with tag "MyApp", with priority "Debug" or above:

adb logcat ActivityManager:I MyApp:D *:S

The final element in the above expression, *:S, sets the priority level for all tags to "silent", thus ensuring only log messages with "View" and "MyApp" are displayed.

V — Verbose (lowest priority)
D — Debug
I — Info
W — Warning
E — Error
F — Fatal
S — Silent (highest priority, on which nothing is ever printed)

mmm vendor/qcom/proprietary/sensors/dsps/sensordaemon; adb shell stop; adb remount; adb sync system; adb shell start
mmm vendor/qcom/proprietary/sensors/dsps/libsensor1; adb shell stop; adb remount; adb sync system; adb shell start


adb logcat -v time Sensors:* QSensorTest:* *:S >log_sensor.txt

switch(sensors[i]) {
        case SNS_DDF_SENSOR_ACCEL:
        case SNS_DDF_SENSOR_GYRO:

check ham sns_ddf_status_e sns_dd_lsm6ds3_set_attr(
    sns_ddf_handle_t dd_handle,
    sns_ddf_sensor_e sensor,
    sns_ddf_attribute_e attrib,
    void* value)

Output Data Rate (ODR)
Data ready Interrupt (DRI)
Device Driver Framework (DDF)

      | (0<<7)            // INT1_INACT_STATE
      | (0<<6)            // INT1_SINGLE_TAP
      | (0<<5)            // INT1_WU
      | (0<<4)            // INT1_FF
      | (0<<3)            // INT1_DOUBLE_TAP
      | (0<<2)            // INT1_6D
      | (0<<1)            // INT1_TILT
      | 0;                // INT1_TIMER

      sensors.msm8953
      adb root
      adb remount
      adb push system/vendor/lib64/sensors.ssc.so system/vendor/lib64/
      adb push system/vendor/lib/sensors.ssc.so system/vendor/lib/
      adb shell sync
      adb reboot

Sua log HAL HAL_LOG_LEVEL_WARN - HAL_LOG_LEVEL_ALL
Enable nguon duoi kernel always 
StartSensorThre expire

===============================================LAY LOG QUALCOMM===============================================
/system/bin/diag_mdlog -f /sdcard/diag_logs/Diag.cfg -o /sdcard/diag_logs/ &

LOGLEVEL

adb shell setprop log.tag.MyAppTag VERBOSE

log.tag.MY_TAG=VERBOSE
adb push local.prop /data/local.prop
adb shell chmod 644 /data/local.prop
adb shell chown root.root /data/local.prop
adb reboot
adb shell getprop | grep log.tag

1) Add or uncomment "`#define LOG_NDEBUG 0`" at top of any module file.
2) In Android.mk or <module>.mk file, add `LOCAL_CFLAGS += -DLOG_NDEBUG=0`

In logcat, logcat | grep -E 'tag1|tag2'.

#   thuantv add lib to show log C/C++ -> logcat                                                   // ok
LOCAL_LDLIBS := -llog
#include <android/log.h>            // thuantv get log
__android_log_print(ANDROID_LOG_DEBUG, "ihevcd_parse_headers.c", "thuantv");
__android_log_print(ANDROID_LOG_DEBUG, "bt_vendor_persist.cpp", "thuantv bt_vendor_nv_read() 1111111111");

==========================================================================================================
In Windows:

set ADB_TRACE=1
adb devices

In Linux:

export ADB_TRACE=1
export ADB_TRACE=0
adb devices

make mmi_temperature showcommands

xem phim 
https://btas.bkav.com/ManagerEvent/Event

1. Đảm bảo các project, ngoài vendor/bkav đều là code gốc (BSH sửa / Qualcomm sửa).
     repo forall -c 'echo $REPO_PROJECT; git status -s'

2. Không thì chạy
     cd <đường dẫn source>/vendor/bkav/overlay-src
     java -jar ./prebuilt-apps-tool.jar -p msm8953_64 -c restore_links <đường dẫn source>

Chạy lại
     repo forall -c 'echo $REPO_PROJECT; git status -s'

Còn lỗi gì thì sửa bằng tay, git reset --hard về code ban đầu.

3. Sinh link
     cd <đường dẫn source>/vendor/bkav/overlay-src
     java -jar ./prebuilt-apps-tool.jar -p msm8953_64 -c generate_links <đường dẫn source>

4. Make như bình thuờng.

them nhan adb usb cho asus zenfone: 51-android.rules 
sudo chmod a+r /etc/udev/rules.d/51-android.rules
sudo service udev restart

chinh man hinh ubuntu:
xrandr -q
xrandr --newmode "1280x1024_60.00"  109.00  1280 1368 1496 1712  1024 1027 1034 1063 -hsync +vsync
xrandr --addmode DVI-I-1 "1280x1024_60.00"

fix error can not open gedit ubuntu:
sudo -H env DISPLAY=:0 gedit

open terminal in directory:
sudo apt-get install nautilus-open-terminal
nautilus -q

show audio: /dev/snd

LA.BF.1.1.1.c3-00800-8x74.0 

10.3.10.116:8080

============================================GIT===============================================================
echo "# android-project" >> README.md
git init
git add README.md
git commit -m "first commit"
git remote add origin https://github.com/thanhltd/android-project.git
git push -u origin master

xoa mot file trong git:
Use git rm:

git rm file1.txt
git commit -m "remove file1.txt"
But if you want to remove the file only from the Git repository and not remove it from the filesystem, use:

git rm --cached file1.txt
And to push changes to remote repo

git push origin branch_name  

check verity boot.img trong build/target/product/verity.mk
user_variant := $(filter user userdebug eng,$(TARGET_BUILD_VARIANT))


enable log bphone1: msm8974-perf_defconfig
CONFIG_SLIP=y
CONFIG_SLIP_COMPRESSED=y
CONFIG_SLIP_MODE_SLIP6=y
CONFIG_USB_USBNET=y



---> Thống kê các file đã sửa trong bộ mã nguồn
repo forall -c 'git status'
---> Đưa mã nguồn về phiên bản checkout gần nhất
repo forall -c "git stash" 
---> Đồng bộ mã nguồn trên server Bkav về:
repo sync 
repo forall -c 'git checkout bkav/1.0.0.47'
---> Thống kê các file sử đổi trong một khối git
git status 
---> Lưu lại các thay đổi chưa commit
git stash save
git stash 
---> Lấy lại thay đổi Xem lại danh sách các thay đổi
git stash list 
+ Xem nội dung của từng thay đổi thêm option -p
git stash list -pho 
+ Xem nội dung của lần thay đổi thứ 1
git stash show stash@{1} 
+ Apply lại thay đổi từ stash lần 1
git stash apply stash@{1} 
---> Xóa các thay đổi không cần thiết 
+ Xóa các thay đổi
git stash drop stash@{1}
git stash pop stash@{1} 
+ Xóa toàn bộ stack
git stash clear 
---> git log : kiểm tra các bản cập nhật có dòng: commit 
f909f6d9d1a09de9f5fe27e314596e9df9900cd2 
git checkout f909f6d9d1a09de9 : lấy về phiên bản tại thời điểm commit. 
---> git pull  				(lấy về)	
git add 	
git commit -asm “your message”	
git push origin master		(đẩy lên)        
git push bkav HEAD:refs/for/testmmi_6.0.1
---> Kiểm tra user.name, user.email:
git config user.name "Dung Phi"
# Set a new name
git config user.emal "nguyendungphi@gmail.com"
# Set a new email
git config user.name
git config user.email
# Verify the setting

Vao thu muc chua source commit
git status
git add prebuilt_HY11/target/product/msm8953_64/system/bin/iwlist
cd fastmmi/module/fingerprint/
git add .
cd ../../..
git add fastmmi/res/layout/layout_fingerprint.xml
git status
git commit -am "cau hinh source MMI tool"
git log
git push bkav HEAD:refs/for/bsh

git push duongnh-server HEAD:refs/for/cm14.1

commit non
git push origin HEAD:refs/for/8.1.0_r21

reset source va lay source moi nhat:
repo forall –c ‘git reset –hard’ && repo sync –j16

git pull origin 8.1.0_r21


====================================OTA====================================================================
$ build/tools/releasetools/ota_from_target_files -v  --block -p  out/host/linux-x86 -k b
uild/target/product/security/testkey -i '/home/themnd/source/8953/2.0.0.1/newe
st/IMG_THUANTV/OTA/3/msm8953_64_debug-target_files-0.0.0.3.zip'  '/home/themnd/sour
ce/8953/2.0.0.1/newest/IMG_THUANTV/OTA/5/msm8953_64_debug-target_files-0.0.0.5.zip'  update_3_5.zip
build/tools/releasetools/ota_from_target_files -v --block -p ou
t/host/linux-x86 -k build/target/product/security/testkey -i path_to_target_files_v1.zip pat
h_to_target_files_v2.zip update.zip

/build/tools/releasetools/ota_from_target_files –v --block –p out/host/linux-x86 -k build/target/product/security/ota –I path_to_target_files_v1.zip path_to_target_files_v2.zip update.zip

adb root
adb push update.zip /data/ota_package/update.zip

adb sideload update.zip

xoa cac file nay khi buid lai OTA
build.prop default.prop selinux_version

===========================================================================================================
xem cau hinh chan nao do trong driver thong qua device tree file .dtsi
&tlmm 40 0(msm8996.dtsi) => wcd9xxx-irq (wcd9xxx-irq.c)

ma buu chinh ha noi zip/postal Code:
100000

set PATH=%PATH%;C:\xampp\php
set PATH=%PATH%;  -- takes the current path and sets PATH to it.
C:\xampp\php      -- Adds this directory to the path, because of 'set PATH' this is added to the path

=======================================PATCH FILE========================================================================
patch file:
diff -u hello.c hello-new.c > hello.patch
patch file hello.c to new file:
patch < hello.patch
create a new file in one directory
cp  hello.c hello--new.c
create a new folder in one directory
cp -R lighttpd-1.4.35/ lighttpd-1.4.35-new/
diff -ruN lighttpd-1.4.35/ lighttpd-1.4.35-new/ > file.patch
patch -s -p0 < file.patch


===========================================SSH=====================================================================
ssh dunglx@10.2.64.15
ssh dinhlk@10.2.64.137
ssh mobile@10.3.10.118
/media/SSD/b2017_camera/out/target/product/msm8953_64/system/app
sudo apt-get install openssh-server

ssh trungnvl@10.2.64.190
ssh thuantv1@10.2.64.78
ssh thuantv1@10.2.64.212
ssh linhntx@10.2.64.180
10.2.64.106
copy 1 file tu thanh sang thuan:
scp thanh@10.2.64.243:misc.img misc.img
scp thanh@10.2.64.243:/media/thanh/L/phan_mem_bootanimation.zip /home/linhntx
scp thanh@10.2.64.243:/media/thanh/L/CODE/software_of_ubuntu/adt-bundle-linux-x86_64-20130729.zip /home/thuantv1
/home/thanh/Downloads
scp thanh@10.2.64.243:/home/thanh/Downloads/SENSOR.zip /home/trungnvl
copy 1 file tu thuan sang thanh:
scp xmind-8-update5-linux.zip thanh@10.2.64.243:


=======================================CREATE oem.img=========================================================
dd if=/dev/zero of=oem.img bs=4k count=60000
mkfs.ext4 oem.img
mkdir oem-mnt
sudo mount -t ext4 -o loop oem.img oem-mnt/
sudo scp bootanimation.zip ~/DungLX/oem-mnt
sudo out/host/linux-x86/bin/make_ext4fs -s -l 240M -a oemdata oem.img ~/Home/DungLX/oem-mnt

dd if=/dev/zero of=splash.img bs=4k count=7200
mkfs.ext4 splash.img
mkdir splash-mnt
sudo mount -t ext4 -o loop splash.img splash-mnt/
sudo scp bootanimation.zip /home/thanh/Desktop/Test/TEST/splash-mnt
sudo out/host/linux-x86/bin/make_ext4fs -s -l 32M -a oemdata splash.img /home/thanh/Desktop/Test/TEST/splash-mnt

=============================================================================================================
audio: cat /proc/asound/cards
battery: cat /sys/class/power_supply/battery/voltage_now
	cat /sys/class/power_supply/battery/health
	cat /sys/class/power_supply/battery/status
    xem battery level:
    cat /sys/class/power_supply/battery/capacity
bluetooth: bdt get_a_device

As root using service call:
su -c service call bluetooth_manager 6 turn bluetooth on - turns on Bluetooth. 
su -c service call bluetooth_manager 8 turn bluetooth off - turns off Bluetooth.


camera: ls /dev/
cpu: cat /sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq
fingerprint: 
flashlight: echo 0 > /sys/class/leds/led:switch/brightness
	echo 200 > /sys/class/leds/led:switch/brightness
/sys/class/leds/led:switch_0/brightness
/sys/class/leds/lcd-backlight/brightness
gps: garden_app -z 0 -u 0 -q 0 -A 1 -B 28
key:
lcd: 
light: echo 0 > /sys/class/leds/led_green/brightness
echo 255 > /sys/class/leds/led_green/brightness
echo 0 > /sys/class/leds/led_blue/brightness
echo 255 > /sys/class/leds/led_blue/brightness
echo 0 > /sys/class/leds/led_red/brightness
echo 255 > /sys/class/leds/led_red/brightness
memory: cat proc/meminfo
sensor: sns_dsps_tc0001
sim: 
storage: cat /proc/partitions
sysinfo: getprop ro.build.description
touch: 
usb: 
vibrator: echo 300 > /sys/class/timed_output/vibrator/enable
wifi: insmod system/lib/modules/wlan.ko
ifconfig wlan0 up
ifconfig

/sys/class/leds/green/brightness


MIC
tinymix 'MultiMedia1 Mixer SLIM_0_TX' 1
tinymix 'AIF1_CAP Mixer SLIM TX7' 1
tinymix 'SLIM_0_TX Channels' 'One'
tinymix 'SLIM TX7 MUX' 'DEC7'
tinymix 'ADC MUX7' 'DMIC'
tinymix 'DMIC MUX7' 'DMIC1'
tinycap dmic1.wav -c 1 -r 48000
MIC dưới
tinymix 'MultiMedia1 Mixer SLIM_0_TX' 1
tinymix 'AIF1_CAP Mixer SLIM TX7' 1
tinymix 'SLIM_0_TX Channels' 'One'
tinymix 'SLIM TX7 MUX' 'DEC7'
tinymix 'ADC MUX7' 'DMIC'
tinymix 'DMIC MUX7' 'DMIC2'
tinycap dmic1.wav -c 1 -r 48000
Record via headset
PCM recording over Headset (AMIC2 Input)
a. Enable
tinymix 'SLIM_0_TX Channels' 'One'
tinymix 'AIF1_CAP Mixer SLIM TX0' 1
tinymix 'SLIM TX0 MUX' 'DEC0'
tinymix 'ADC MUX0' 'AMIC'
tinymix 'AMIC MUX0' 'ADC2'
tinymix 'DEC0 Volume' 84
tinymix 'MultiMedia1 Mixer SLIM_0_TX' 1
tinycap /data/amic2.wav -c 1 -r 48000
tinymix 'SLIM RX3 MUX' 'AIF3_PB'
tinymix 'SLIM RX4 MUX' 'AIF3_PB'
tinymix 'SLIM_5_RX Channels' 'Two'
tinymix 'SLIM_5_RX SampleRate' 'KHZ_44P1'
tinymix 'RX INT1_1 MIX1 INP0' 'RX3'
tinymix 'RX INT2_1 MIX1 INP1' 'RX4'
tinymix 'SLIMBUS_5_RX Audio Mixer MultiMedia1' 1
tinymix 'RX INT1 DEM MUX' 'CLSH_DSM_OUT'
tinymix 'RX INT2 DEM MUX' 'CLSH_DSM_OUT'
tinymix 'SPL SRC0 MUX' 'SRC_IN_HPHL'
tinymix 'SPL SRC1 MUX' 'SRC_IN_HPHR'
tinymix 'COMP1 Switch' 1tinymix 'COMP2 Switch' 1
tinyplay /data/test.wav


config buffer dmesg: CONFIG_LOG_BUF_SHIFT=14

msm8953_64:/ # garden_app -z 0 -u 0 -q 0 -A 1 -B 28
GARDEN: ZPP testCase: 0 

GARDEN: ulptestCase number: 0 

GARDEN: Xtra Enabled: 0
GARDEN: Stop on Minimum Svs: 1
GARDEN: Stop on Minimum SNR: 28.000000
GARDEN: Starting GARDEn
GARDEN: Test Thread Enter
GARDEN: ## gps_create_thread ##:
GARDEN: Loc_hal_worker
GARDEN: created thread
GARDEN: initialize GPS interface returned 0
GARDEN: Could not get a handle to AgpsRilInterface...but proceeding
GARDEN: ## gps_create_thread ##:
GARDEN: ulp_msg
GARDEN: created thread
GARDEN: ## gps_create_thread ##:
GARDEN: ulp_monitor
GARDEN: created thread
GARDEN: Invalid ZPP test case number: 0
GARDEN: Session 0:
GARDEN: set_position_mode returned 0
GARDEN: start GPS interface returned 0
GARDEN: Waiting for location callback...
GARDEN: test_ulp_request_phone_context with context_type: 7f,request_type: 3 
GARDEN: test thread unblocked, action = 9
GARDEN: ACTION_PHONE_CONTEXT_UPDATE 
 Simulating AFW injection of phone context info

GARDEN: ## gps_set_capabilities ##:
GARDEN: Capabilities: 0x37
GARDEN: ## test_gnss_loc_set_system_info_cb ##: 2015
GARDEN: ## gps_set_capabilities ##:
GARDEN: Capabilities: 0x37
GARDEN: ======================================================
GARDEN: ulp_location_cb :
GARDEN: LAT: 15.890000, LON: 105.800003, ACC: 462316.218750, TIME: 1483617438800, status: 1
GARDEN: ======================================================
GARDEN: ======================================================
GARDEN: ulp_location_cb :
GARDEN: LAT: 15.890002, LON: 105.800003, ACC: 431419.031250, TIME: 1483617493893, status: 1
GARDEN: ======================================================
GARDEN: stop GPS interface returned 0
GARDEN: cleanup GPS interface returned 
GARDEN: wait for pthread_join
GARDEN: test thread unblocked, action = 1
GARDEN: ACTION_QUIT
GARDEN: Test Thread Exit
GARDEN: pthread_join done
GARDEN: GARDEn Tests Finished!
GARDEN: Exiting GARDEn

===============================================================================================================
cai winusb:
64bit:
wget https://launchpad.net/~colingille/+archive/freshlight/+files/winusb_1.0.11+saucy1_amd64.deb
sudo dpkg -i winusb*
sudo apt-get -f install

setup python tkinter:
sudo apt-get install python python-tk idle python-pmw python-imaging


minicom
sudo apt-get install minicom
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
chon Serial port setup/serial device /dev/ttyUSB0
thoat ra chon save setup as dfl

cai theme cho ubuntu:
https://github.com/anmoljagetia/Flatabulous

sudo rm /var/lib/apt/lists/* -vf 
sudo apt-get update

*/

API android:
http://www.pocketmagic.net/category/software/

cai seven-square to cast screen android device:
sudo apt-get install android-tools-adb
sudo apt-get install qt4-qmake libqt4-dev libqtcore4 libqtgui4
git clone https://github.com/yangh/sevensquare.git 
cd sevensquare
make 
// enable debugging usb and stay awake when charging in setting to use
sudo make install
seven-square

Vysor cai tren extensions google chrome

setup javamail API ubuntu:
export JAVA_HOME=/usr/lib/jvm/java-8-openjdk-amd64
export PATH=$PATH:$JAVA_HOME/bin
export CLASSPATH=$JAVA_HOME/jre/lib/ext:$JAVA_HOME/lib/tools.jar:mail.jar:.
export CLASSPATH=$JAVA_HOME/jre/lib/ext:$JAVA_HOME/lib/tools.jar:activation.jar:.


repo init -u ssh://thanhltd@bkav:29418/b2017/platform/manifest -b bsh

repo khi bi chan mang chay lenh sau:
repo init -u ssh://thuongdd@bkav:29418/b2017/platform/manifest -b 7.1.1 --depth=1 --repo-url ~/clone.bundle

source B2017P:
$ repo init -u ssh://thanhltd@bkav:29418/b2017P/platform/manifest -b 7.1.1 --depth=1
$ git clone ssh://thanhltd@bkav:29418/b2017P-nonhlos -b 7.1.1

repo init -u ssh://thanhltd@bkav:29418/b2017/platform/manifest -b 7.1.1 --depth=1

make -C kernel O=../out/debug/target/product/msm8996/obj/KERNEL_OBJ INSTALL_MOD_PATH=../../system INSTALL_MOD_STRIP=1 ARCH=arm64 CROSS_COMPILE=aarch64-linux-android- modules_install

check board-id trong device tree: msm8953-qrd-sku3.dts arch/arm/boot/dts/qcom/msm8953-qrd-sku3.dts

redmind:
http://10.2.64.15:8080/redmine/projects/security/issues/new

bat full log bluetooth HAL:
/external/bluetooth/bluedroid/confbt_stack.conf


jdk1.8.0_111
http://elinux.org/Debugging_by_printing
https://wiki.ubuntu.com/Kernel/KernelDebuggingTricks

sudo add-apt-repository ppa:openjdk-r/ppa
sudo apt-get update
sudo apt-get install openjdk-8-jdk

sceencast Bphone:
sudo add-apt-repository ppa:webupd8team/java
sudo apt-get update
sudo apt-get install oracle-java7-installer
javaws -viewer

sudo apt-get purge openjdk-8-jdk

sudo update-alternatives --config java
sudo update-alternatives --config javac

jdk-8u111-linux-x64

mạng: tuyendd

adb logcat | grep -s "PERF"

===================================IMPORT AOSP TO ECLIPSE=========================================================================
[aosp]$ cp development/ide/eclipse/.classpath 
Start Eclipse
Create new "Java project"
Project name = your AOSP name
Deselect "Use default location"
Location = path to your AOSP
Click "Next"
Wait a little bit ...
Click "Finish"
Wait for it to build your project
... it likely will fail ...

============================================================================================================
cac tu viet tat
viet tat qualcomm:
RESOURCE POWER MANAGEMENT (RPM)
node power architecture (NPA)
The RPM is a reduced version of the PMIC software driver for VREG and clock buffer control
PMIC Arbitration Matrix (PAM)
user identification module (UIM) SIM RF
Modem Boot Authenticator (MBA)
Tightly Coupled Memory (TCM)
Instruction Memory (IMEM)
double data rate (DDR) 
Peripheral Image Loader (PIL)
Modem Peripheral Subsystem Software (MPSS)
Applications Processor Subsystem (APSS)
Technical Account Manager (TAM)
Battery UICC Alarm (BUA)
FFBM (Factory fast boot mode)
multiprocessor control (MPCTL)

viet tat Android:
URL - Uniform Resource Locator định vị tài nguyên về mặt địa chỉ (Locator)
URI - Uniform Resource Identifier định danh tài nguyên, dùng để xác định một resource nào đó trên web
URN - Uniform Resource Name định danh về mặt tên tài nguyên

=================INSTALL GENYMOTION===========================================================================================
LD_LIBRARY_PATH=/usr/local/lib64/:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH
sudo add-apt-repository ppa:ubuntu-toolchain-r/test
sudo apt-get update
sudo apt-get install gcc-4.9 g++-4.9
=============================================================================================================
xem host id cua window lay lisence:
ipconfig /all

root@msm8996:/ # cat /data/misc/radio/ver_info.txt
{
    "Image_Build_IDs": {
        "adsp": "ADSP.8996.2.7.1-00121-00355-1", 
        "apps": "LA.HB.1.3.2-16800-8x96.0-1", 
        "boot": "BOOT.XF.1.0-00298-M8996LZB-1", 
        "btfm": "BTFM.RM.4.0-00116-QCABTFMSWPZ-1", 
        "common": "MSM8996.LA.2.0-01600-STD.PROD-1", 
        "cpev2": "CPE.TSF.1.0-00035-W9335AAAAAAAZQ-1", 
        "glue": null, 
        "modem": "MPSS.TH.2.0.1-00437-M8996FAAAANAZM-1", 
        "rpm": "RPM.BF.1.6-00148-M8996AAAAANAZR-1", 
        "slpi": "SLPI.HB.1.0-00277-M8996AZL-1", 
        "tz": "TZ.BF.4.0.1-00251-M8996AAAAANAZT-1", 
        "video": "VIDEO.VE.4.0-00118-PROD-1", 
        "wapi": "WLAN.ADDON_RM.3.0-00013-CNSS_RMZ_WAPI-1", 
        "wigig": "WIGIG.SPR.2.1-00032-WIGIGSWZ-1", 
        "wlan": "WLAN.RM.4.1.c2-00033-QCARMSWPZ-1"
    }, 
    "Metabuild_Info": {
        "Meta_Build_ID": "MSM8996.LA.2.0-01600-STD.PROD-1", 
        "Product_Flavor": "asic", 
        "Time_Stamp": "2017-01-12 17:12:04"
    }, 
    "Version": "1.0"

-các realtime thread xử lý việc điều chỉnh tần số:
static struct task_struct *speedchange_task;
static cpumask_t speedchange_cpumask;
static spinlock_t speedchange_cpumask_lock;
static struct mutex gov_lock;

-mức tần số hispeed để tăng từ tần số thấp lên khi tải chạm mốc quy định go_hispeed_load:
static unsigned int hispeed_freq;

- go_hispeed_load : 99 điều chỉnh tần số lên hispeed khi cpu load bằng hoặc lớn hơn giá trị này

- sampling_down_factor được kết hợp cùng với min_sample_time tại giá trị max freq
 + min_sample_time(80) khoảng thời gian nhỏ nhất dành tại một tần số trước khi giảm xuống và để đảm bảo cho
governor có đủ thời gian lưu lại cpu load data để xác định tải làm việc cho thích hợp

- target_loads: các giá trị cpu load được sử dụng để điều chỉnh tốc độ nhằm ảnh hưởng tới giá trị cpu load hiện tại hướng tới giá trị này. Mặc định của giá trị target_loads là 90
85 1000000:90 1700000:99
#define DEFAULT_TARGET_LOAD 90
static unsigned int default_target_loads[] = {DEFAULT_TARGET_LOAD};
static spinlock_t target_loads_lock;
static unsigned int *target_loads = default_target_loads;
static int ntarget_loads = ARRAY_SIZE(default_target_loads);

- timer_rate =20: tỉ lệ mẫu cho việc đánh giá lại cpu load khi cpu không ở trạng thái idle. Một timer trì hoãn được sử dụng, cpu sẽ không bị đánh thức từ idle để phục vụ timer này cho đến khi có một công việc khác cần chạy. Timer trì hoãn là timer_slack
DEFAULT_TIMER_RATE = 20

MIN_BUSY_TIME = 100

- above_hispeed_delay: khi tốc độ bằng hoặc cao hơn hispeed_freq, chờ một khoảng thời gian bằng above_hispeed_delay trước khi tăng tốc độ để hồi đáp lại high load. mặc định là 20
80000 1300000:200000 1500000:40000
#define DEFAULT_ABOVE_HISPEED_DELAY 20
static unsigned int default_above_hispeed_delay[] = {
	DEFAULT_ABOVE_HISPEED_DELAY };
static spinlock_t above_hispeed_delay_lock;
static unsigned int *above_hispeed_delay = default_above_hispeed_delay;
static int nabove_hispeed_delay = ARRAY_SIZE(default_above_hispeed_delay);

- boost_val khác không có đồng nghĩa với speed boost active không xác định

- boostpulse_duration_val = 80 khoảng thời gian của một boot pulse trong một us

- boostpulse_endtime end time của boost pulse trong ktime được chuyển đổi thành us

- timer_slack_val = 80 thời gian thêm vào tối đa để chờ trong idle, đối nghịch với timer_rate, tại các tốc độ cao hơn tối đa trước khi wakeup để giảm tốc độ, bằng -1 nếu không cần thiết

- static bool io_is_busy;

Nếu max load ở giữa các cpu cao hơn up_threshold_any_cpu_load và nếu tần số cao nhất giữa các cpu cao hơn
up_threshold_any_cpu_freq thì không để tần số rơi xuống bên dưới sync_freq
static unsigned int up_threshold_any_cpu_load;
static unsigned int sync_freq;
static unsigned int up_threshold_any_cpu_freq;

document about cpu burst: Documentation/s390/Debugging390.txt
dump_stack() để theo dõi các hàm liên quan đến hàm hiện tại.
================================================================================================================
BSP
TrustZone
security

system/extras/verity/Android.mk:81:LOCAL_SRC_FILES := keystore_signer
system/extras/verity/Android.mk:82:LOCAL_MODULE := keystore_signer

private key: PRODUCT_VERITY_SIGNING_KEY is used to sign boot and recovery image.
verity.pk8 -- private key used to sign boot.img and system.img
verity.x509.pem -- certificate include pub key
verity_key -- pub key used in dm verity for system image
verity.pk8 and verity.x509.pem are used in signing the boot.img

openssl genrsa -out key.pem 2048
openssl req -new -sha256 -key key.pem -out csr.csr
openssl req -x509 -sha256 -days 365 -key key.pem -in csr.csr -out certificate.pem
openssl req -in csr.csr -text -noout | grep -i "Signature.*SHA256" && echo "All is well" || echo "This certificate will stop working in 2017! You must update OpenSSL to generate a widely-compatible certificate"

openssl genrsa -out privatekey.pem 1024
openssl req -new -x509 -key privatekey.pem -out publickey.cer -days 365
openssl pkcs12 -export -out public_privatekey.pfx -inkey privatekey.pem -in publickey.cer

Extract Public Key from X.509 Certificate as Hex
openssl x509 -modulus -noout < pub.cer | sed s/Modulus=/0x/

openssl genrsa -out example.org.key 2048
openssl rsa -in example.org.key -pubout -out example.org.pubkey
openssl rsa -in example.org.pubkey -pubin -noout -text
openssl req -new -key example.org.key -out example.org.csr
openssl req -in example.org.csr -noout -text

openssl genrsa -out bkav.key 2048
openssl req -new -sha256 -key bkav.key -out bkav.csr

MDTP lock: Mobile Device Theft Prevention

 xxd -i cert.der | sed -e 's/unsigned char .* = {/const unsigned char OEM_KETSTORE[] = {/g' -e 's/unsigned int .* = .*;//g'
================================================================================================================
- To generate OEM's new keypair
cd your android home
./development/tools/make_key mykey '/C=VN/ST=Hanoi/L=CauGiay View/O=Bkav/OU=Mobile/CN=Bphone/emailAddress=bphone@bkav.com'
don't input password, then mykey.pk8 and mykey.x509.pem will be generated in current folder.

- To generate verity key for dm verity feature.
source build/envsetup.sh
lunch
mmm system/extras/verity/
./out/host/linux-x86/bin/generate_verity_key -convert mykey.x509.pem verity_key

- To generate keystore
openssl rsa -in mykey.pk8 -inform DER -pubout -outform DER -out mypub.der
java -Xmx512M -jar out/host/linux-x86/framework/BootKeystoreSigner.jar mykey.pk8 mykey.x509.pem keystore.img mypub.der
xxd -i keystore.img | sed -e 's/unsigned char .* = {/const unsigned char OEM_KEYSTORE[] = {/g' -e 's/unsigned int .* = .*;//g'
gedit /home/thanh/Desktop/oem_keystore.h
copy hexadecimal value to file oem_keystore.h
copy oem_keystore.h to location bootable/bootloader/lk/platform/msm_shared/include
cp /home/thanh/Desktop/oem_keystore.h /media/thanh/L/2bphone2_6.0.1_11/bootable/bootloader/lk/platform/msm_shared/include

- To generate signed boot.img
out/host/linux-x86/bin/boot_signer /boot out/debug/target/product/msm8996/boot.img build/target/product/security/verity.pk8 build/target/product/security/verity.x509.pem out/debug/target/product/msm8996/boot.img

================================================================================================================
generate bkav.key in device/qcom/common
openssl genrsa -out bkav.key 2048
openssl req -new -sha256 -key bkav.key -out bkav.pem -days 7300 -subj "/C=VN/ST=Hanoi/L=CauGiay View/O=Bkav/OU=Mobile/CN=Bphone/emailAddress=bphone@bkav.com"
reference
openssl req -new -x509 ${hash} -key ${two} -out $1.x509.pem \
  -days 10000 -subj "$2" &
xxd -i bkav.pem | sed -e 's/unsigned char .* = {/const unsigned char certBuffer[CERTIFICATE_SIZE] = {/g' -e 's/unsigned int .* = .*;//g'

openssl genrsa -out key.pem 1024
openssl req -new -key key.pem -out request.pem
openssl x509 -req -days 9999 -in request.pem -signkey key.pem -out certificate.pem
openssl pkcs8 -topk8 -outform DER -in key.pem -inform PEM -out key.pk8 -nocrypt

================================================================================================================
openssl genrsa -out key.pem 1024
openssl req -key key.pem -new -x509 -out cert.pem
openssl x509 -outform der -in cert.pem -out cert.der

==============================================================================================================
test CTS: "fail" "pass"
run cts -c android.keystore.cts.KeyChainTest -m testIsBoundKeyAlgorithm_RequiredAlgorithmsSupported
adb install '/home/thanh/android-cts/repository/testcases/CtsKeystoreTestCases.apk'
---------------------------------------------------------------------------------------------------------------
adb shell pm list instrumentation
adb shell am instrument -w com.android.cts.security/android.support.test.runner.AndroidJUnitRunner
run cts -c com.android.cts.devicepolicy.DeviceOwnerTest -m testApplicationRestrictions
run cts -c com.android.cts.devicepolicy.DeviceOwnerTest -m testCaCertManagement
run cts -c com.android.cts.devicepolicy.DeviceOwnerTest -m testDeviceOwnerSetup
run cts -c com.android.cts.devicepolicy.DeviceOwnerTest -m testKeyManagement
run cts -c com.android.cts.devicepolicy.DeviceOwnerTest -m testLockTask
run cts -c com.android.cts.devicepolicy.DeviceOwnerTest -m testPersistentIntentResolving
run cts -c com.android.cts.devicepolicy.DeviceOwnerTest -m testScreenCaptureDisabled
https://qualcomm-cdmatech-support.my.salesforce.com/501300000013Sys?srPos=1&srKp=501

adb shell am instrument -w com.android.cts.security/android.support.test.runner.AndroidJUnitRunner
adb shell am instrument -w com.android.cts.keystore/android.support.test.runner.AndroidJUnitRunner
adb shell am instrument -w android.core.tests.libcore.package.harmony_javax_security/android.support.test.runner.AndroidJUnitRunner

The am command is a command-line interface to the ActivityManager. 'am' is used to start and instrument activities using the adb shell command
For example, to start the Contacts application you can use
> adb shell am start -n com.google.android.contacts/.ContactsActivity
adb shell am instrument -w -r com.android.music.tests/.MusicPlayerLaunchPerformance
http://i-miss-erin.blogspot.com/2010/04/android-cts-compatibility-test-suite.html

================================================================================================================
DECOMPILE APK 
   linux sh /home/codexplo/dex2jar-version/d2j-dex2jar.sh /home/codexplo/someApk.apk
   windows C:\dex2jar-version\d2j-dex2jar.bat someApk.apk

    use a decompiler to view the source.
    jd-gui
    JAD

===========================================GEN ICON=========================================================
http://romannurik.github.io/AndroidAssetStudio/index.html
=================================================================================================================
SEAndroid

user:role:type:mls_level
seclabel u:r:qti-testscripts:s0
	 u:object_r:bluetooth_loader_exec:s0
	 u:object_r:tjet_device:s0

the role is always set to r for domains (processes) or to object_r for objects


allow domains types:classes permissions
Domain – A label for the process or set of processes. Also called a domain type as it is just a type for a process.
Type – A label for the object (e.g. file, socket) or set of objects.
Class – The kind of object (e.g. file, socket) being accessed.
Permission – The operation (e.g. read, write) being performed.

allow appdomain app_data_file:file rw_file_perms
allow mpdecision mpdecision_socket:sock_file create_file_perms
allow untrusted_app tjet_device:chr_file { getattr open read ioctl lock append write };



- Lựa chọn module được build ra dưới kernel thông qua terminal:
thanh@bkav:/media/thanh/aosp/2bphone2/kernel$ export ARCH=arm
thanh@bkav:/media/thanh/aosp/2bphone2/kernel$ make menuconfig

================================================================================================================
Here is a quick way of generating a proper MAC Address:

openssl rand 6 | xxd -p | sed 's/\(..\)/\1:/g; s/:$//'

=============================================================================================================

-------------------------------------------------------------------------------------------------------------
3 command git commit data to server Mr.DuongNH:
git add .
git commit -asm "Add ThanhLTd folder"
git push origin master

Dear Qualcomm support team,
I have a problem and I need your help.

My company wants to follow patches of Qualcomm about security, performance,... on Bphone1 source. With Bphone1, we use msm8974 chipset and run android 5.1.0.
Now, we are reading these websites: https://createpoint.qti.qualcomm.com/, https://portland.source.codeaurora.org/patches/quic/la/, https://chipcode.qti.qualcomm.com/. And we are confusing about the issue, we don't know these patches is important with us at the moment. How to filter them effectively?

Could you please help me solve this problem? 
Thanks and best regards,Thanh.

================================================================================================================
                                    SO SANH CHUOI TRONG JAVA
public class JavaAndroidVn {
 
    public static void main(String[] args) {
        String str1 = "Android.Vn Android.Vn";
        String str2 = "android.vn android.vn";
 
        System.out.println("So sánh phân biệt chữ hoa chữ thường: "+str1.equals(str2));
        System.out.println("So sánh không phân biệt hoa thường: "+str1.equalsIgnoreCase(str2));
 
        // So sánh thứ tự a, b, c ....
        String str3 = "abc";
        String str4 = "bcde";
        System.out.println("So sánh 2 chuỗi thường!");
        System.out.println(""+str3.compareTo(str4));  //str3 &lt; str4 , so sánh trả về -1
        System.out.println(""+str4.compareTo(str3)); // str4 &gt; str3, so sánh trả về 1
        System.out.println(""+str3.compareTo(str3)); // str3 = str3, so sánh trả về 0
 
        System.out.println("So sánh 2 chuỗi hoa và thường");
        String str5 = "ANDroid.Vn";
        String str6 = "android.vn";
        System.out.println(""+str5.compareToIgnoreCase(str6)); // KHông phân biệt hoa và thường
        System.out.println(""+str5.compareTo(str6));          // Phân biệt chữ hoa và chữ thường!
 
        System.out.println("Chuỗi này có là tập con của chuỗi kia không?");
        String str7 = "android.vn";
        String str8 = "vn";
        //Quá trình so sánh có phân biệt chữ hoa và chữ thường!
        System.out.println("Chuỗi vn nằm ở vị trí thứ "+str7.indexOf(str8)+" của chuỗi android.vn");

        String strOrig = "Hello readers";
        int intIndex = strOrig.indexOf("Hello");
        if(intIndex == - 1){
         System.out.println("Hello not found");
        }else{
         System.out.println("Found Hello at index "
         + intIndex);
        }
 
        //Khi so sánh không tìm thấy thì sẽ trả về -1
        str8 = "TN";
        System.out.println("Chuỗi TN nằm ở vị trí thứ "+str7.indexOf(str8)+" của chuỗi android.vn");
 
        System.out.println("Chuỗi này có bắt đầu hay kết thúc bằng chuỗi kia không?");
        str7 = "android.vn";
        String str9 = "and";
        String str10 = "roid.vn";
        System.out.println("str7.startsWith(str9) = "+str7.startsWith(str9));
        System.out.println("str7.endsWith(str10) = "+str7.endsWith(str10));
 
 
    }
}

#include<stdio.h>
#include<stdlib.h>

void dump_line(File *fp)
{
	int ch;
	while((ch = fgetc(fp)) != EOF && ch != '\n')
}

int main()
{
	int x;
	char st[31];
	
	printf("Enter an integer: ");
	scanf("%d", &x);
	dump_line(stdin);
	printf("Enter a line of text: ");
	fgets(st, 31, stdin);
return 0;
}

int LinearSearch(int a[], int N, int x)
{
 int i = 0; //mảng gồm N phần tử từ a[0]...a[N-1]
 a[N] = x; //thêm phần tử thứ N+1
 while (a[i] != x)
  i++;
 if (i == N)
  return -1; //tìm hết mảng nhưng không có x
 else
  return i; //tìm thấy x tại vị trí i
}

smb://10.2.64.46/fingerprints/
haonc 1
smb://10.2.64.15/
dunglx 123456
system/bin/   debug
36 contain 205, 180 out/mmi

system/bin          user
34 contain 198 175	out/mmi

hwcCommit_intermediates
hwcCommit


fix nfc chay tren 6.0.1 bphone2:
bo comment cac phan co muc i2c5 trong cac file device tree: msm8996.dtsi, msm8996-mtp.dtsi, msm8996-pinctrl.dtsi

command test wifi:
insmod /system/lib/modules/wlan.ko
ifconfig wlan0 up
iwlist wlan0 scanning


FIX ME: 
aarch64-linux-android-gcc -I android-ndk-r13b/platforms/android-24/arch-arm64/usr/include LogoInjector.v1.4.c -o lodepng

MMI Bphone1:

adb command:
adb push MMI_APP/lib /system/vendor/lib/
adb push MMI_APP/etc /system/etc/
adb push MMI_APP/mmi /system/etc/mmi/
adb push MMI_APP/mmi1 /system/etc/mmi1
adb push MMI_APP/bin /system/bin/
adb push MMI_APP/libmm-qcamera.so /system/lib/

adb -s 7f1c864e shell

mm-audio-ftm -c /system/etc/ftm_test_config -tc 5 -d 8 -v 80 -file /system/etc/mmi/qualsound.wav
garden_app -z 0 -u 0 -q 0 -A 1 -b 28
bdt get_a_device

mm-audio-ftm -c /system/etc/ftm_test_config -tc 1 -d 8 -v 80 -file /data/qualsound.wav
parameter=type:play;tc:1;volume:80;duration:3;file:/system/etc/mmi/qualsound.wav;

msm8953 audio
mm-audio-ftm -c /system/etc/ftm_test_config -tc 1 -d 3 -v 80 -file /system/etc/mmi/qualsound.wav

msm8996 audio tinyplay:
tinymix 'SLIM RX0 MUX' 'AIF_MIX1_PB'
tinymix 'SLIM_0_RX Channels' 'One'
tinymix 'RX INT7_1 MIX1 INP0' 'RX0'
tinymix 'COMP7 Switch' '1'
tinymix 'SpkrLeft COMP Switch' '1'
tinymix 'SpkrLeft BOOST Switch' '1'
tinymix 'SpkrLeft VISENSE Switch' '1'
tinymix 'SpkrLeft SWR DAC_Port Switch' '1'
tinymix 'RX7 Digital Volume' '84'
tinymix 'SLIMBUS_0_RX Audio Mixer MultiMedia1' '1'
tinyplay /data/qualsound.wav 


tinymix 'SLIM RX1 MUX' 'AIF_MIX1_PB'
tinymix 'SLIM_0_RX Channels' 'One'
tinymix 'RX INT7_1 MIX1 INP0' 'RX0'
tinymix 'RX7 Digital Volume' '84'
tinymix 'COMP7 Switch' '1'
tinymix 'SLIMBUS_0_RX Audio Mixer MultiMedia1' '1'
tinyplay /data/qualsound.wav

chienbv manhtdc

/system/etc/mixer_paths

Loa thoai: HPHL Volume HPHR Volume
Loa ngoai: chinh RX1 và RX2 với value=’84’ ở trong ảnh lên tầm 85, tìm dòng  RX7 Digital Volume  dưới  lệnh mẹ Path name= Speaker và thay đổi value=’88’ hoặc cao hơn

GPIO_63 - ORIENTATION
GPIO_94  USB_AUDIO_EN2_N
GPIO_99  USB_AUDIO_EN1
GPIO_73  CODEC_INT1 ngat

root@msm8996:/ # sysctl -a |grep printk
cat /proc/sys/kernel/printk
$ echo "6" > /proc/sys/kernel/printk
$ cat /proc/sys/kernel/printk
6 4 1 7
echo "3 3 3 3" > /proc/sys/kernel/printk

headset: jack 3.5
cat /proc/kmsg
dmesg

Bphone1:
root@Bphone:/ # cat /proc/sys/kernel/printk                                    
6	6	1	7

touch dung chung 2 nguon: msm8996-mtp.dtsi
vdd-supply = <&pm8994_l14>;
			avdd-supply = <&pm8994_l22>;

sua loi grub ubuntu thanh cong:
sudo fdisk -l
create folder in home: /home/ubuntu/temp
sudo mount /dev/sda5 /home/ubuntu/temp
sudo grub-install --root-directory=/home/ubuntu/temp /dev/sda // /dev/sda is hard disk name


sudo dpkg-reconfigure dash
sudo rm /bin/sh
sudo ln -s /bin/bash /bin/sh

make mrproper to clean .config file in kernel


source setenv.sh

Build images –
./build.sh TARGET_FAMILY=8953 --prod

Clean the build –
./build.sh TARGET_FAMILY=8953 --prod -c

file cau hinh audio duoi kernel tren hardware:
/hardware/qcom/audio/configs/msm8953

===============================================================================================================
AUDIO PORTING:
/device/qcom/msm8996/mixer_paths.xml
SCK (Bit Clock)
WS (Word Select)
SD0 (Audio Out)
SD1 (Audio In)

cau hinh chan
kernel/msm-3.18/arch/arm64/boot/dts/qcom/msm8953-pinctrl.dtsi

check lai file init.target.rc:
write /sys/kernel/boot_adsp/boot 1
xem sound card duoc dang ky:
cat sys/kernel/debug/asoc/

how to detect jack 3.5:

adb shell getevent /dev/input/event7 lay su kien cam jack tren 8996
============================================================================================================
khau quyet tam phap:
reset la out con intterupt la in
dieu khien gpio echo 1 > /sys/class/gpio/gpio899/value chi trong mot khoang thoi gian boot len sau mot thoi gian la mat

of_get_gpio ham lay dia chi cho viec dieu khien gpio trong driver

===============================================================================================================

UsbDeviceManager.java


/sys/devices/soc/7000000.ssusb/7000000.dwc3/udc/7000000.dwc3/current_speed

sudo -E add-apt-repository -y ppa:webupd8team/sublime-text-3
sudo apt-get update; sudo apt-get install -y sublime-text-installer

LOI Install Package: xoa thu muc .config/sublime-text-3

Mo Package Control/Install Package/Brackethighlighter de install sau do restart sublime
them file bh_core.sublime-settings vao .config/sublime-text-3/Packages/User/ co noi dung

{

  "bracket_styles": {

    "default": {
        "icon": "dot",
        // BH1's original default color for reference
        // "color": "entity.name.class",
        "color": "brackethighlighter.default",
        "style": "highlight"
    }

  }

}

Mo Package Control/Install Package/PackageResourceViewer de install
Sau do vao PackageResourceViewer: Open Resource/ Color Scheme - Default/ Cobalt.tmTheme de them cac dong nay:

        <dict>
            <key>name</key>
            <string>Bracket Tag</string>
            <key>scope</key>
            <string>brackethighlighter.default</string>
            <key>settings</key>
            <dict>
                <key>background</key>
                <string>#9d00ff</string>
                <key>foreground</key>
                <string>#D4F20D</string>
            </dict>
        </dict>

- CAC BUOC TAO BOOT SDCARD PI
- chia 3 phan vung boot-fat32-1G, system-ext4-2G, data-ext4 bang gparted
su homecenter.bsh


sudo dd if=system.img of=/dev/sdd2 bs=1M

Read it first : https://github.com/android-rpi/local_manifests

# Build Kernel
 Install gcc-arm-linux-gnueabihf
 $ cd kernel/rpi
 $ ARCH=arm make lineageos_rpi3_defconfig
 $ ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- make zImage dtbs

# Install python mako module
  sudo apt-get install python-mako

# Patch framework source :
  https://github.com/lineage-rpi/android_local_manifest/tree/cm-14.1/patches
 
# Build Android source
 Continue build with http://source.android.com/source/building.html
 $ source build/envsetup.sh
 $ lunch lineage_rpi3-userdebug
 $ mka ramdisk systemimage
 
# Help for build failure :
   https://github.com/android-rpi/device_brcm_rpi3/wiki/Build-Errors

# Prepare sd card
 Partitions of the card should be set-up like followings.
  p1 128MB for BOOT : Do fdisk : W95 FAT32(LBA) & Bootable, mkfs.vfat
  p2 1024MB for /system : Do fdisk, new primary partition
  p3 remainings for /data : Do fdisk, mkfs.ex4
 Set volume label for each partition - system, cache, userdata
  : use -L option of mkfs.ext4, e2label command, or -n option of mkfs.vfat
 
# Write system partition
  $ cd out/target/product/rpi3
  $ sudo dd if=system.img of=/dev/<p2> bs=1M
  
# Copy kernel & ramdisk to BOOT partition
  mkdir /media/thanh/boot/overlays
  cp device/brcm/rpi3/boot/* '/media/thanh/boot'
  cp kernel/rpi/arch/arm/boot/zImage '/media/thanh/boot'
  cp kernel/rpi/arch/arm/boot/dts/bcm2710-rpi-3-b.dtb '/media/thanh/boot'
  cp kernel/rpi/arch/arm/boot/dts/overlays/vc4-kms-v3d.dtbo /media/thanh/boot/overlays/vc4-kms-v3d.dtbo
  cp out/target/product/rpi3/ramdisk.img '/media/thanh/boot'

  */

# HDMI_MODE : If DVI monitor does not work, try followings for p1:/config.txt
  hdmi_group=2
  hdmi_mode=85

# How to put Android-TV launcher :
  https://github.com/android-rpi/device_brcm_rpi3/wiki#how-to-apply-android-tv-leanback-launcher

 <TextView
        android:text="2"
        android:textSize="200sp"
        android:layout_width="fill_parent"
        android:layout_height="fill_parent"
        android:id="@+id/textView2"
        android:style="@style/textviewStyle" 
        android:background="@android:color/holo_green_light"
        android:gravity="center"
        android:textColor="#EEEEEE"
        android:layout_alignParentRight="true" />


Thread t1 = new Thread(new Runnable() {
 
            @Override
            public void run() {
                try {
                    Thread.sleep(1000);
                     
                    System.out.println("some task");
                } catch (InterruptedException e) {
                    // TODO Auto-generated catch block
                    e.printStackTrace();
                }
                System.out.println("thread is running...");  
            }
        }, "t1");
 
        t1.start();
        try{
        t1.interrupt();
        }catch(Exception ex){
            ex.printStackTrace();
        }

#################################### ThoNH build non-HLOS SDM660 #######################################

1.  build xbl:
1.1.  Setup tool: yeu cau cac tool sau phai duoc cai dat
  - LLVM tool chain:    LLVM.3.8.4
  - Linaro (ld - Linker) :    gcc-linaro-aarch64-none-elf-4.9-2014.07
  - python:     2.7.6
    (setup giong nhu tren S625 )

1.2.  command build:
  cd BOOT.XF.1.4/boot_images/
  sudo su

- build xbl:
    python -u QcomPkg/buildit.py --variant LA -r RELEASE -t Sdm660Pkg,QcomToolsPkg
      ( file tao ra trong duong dan:  QcomPkg/Sdm660Pkg/Bin/660/LA/RELEASE/xbl.elf )

- clean xbl:
    python -u QcomPkg/buildit.py --variant LA -r RELEASE -t Sdm660Pkg,QcomToolsPkg --build_flags=cleanall

2.  build RPM:
2.1.  Setup tool:  yeu cau cac tool sau phai duoc cai dat
  - LLVM compiler tools 3.9.2 (copy vao folder /pkg/qct/software/llvm/release/arm/3.9.2 )
  - python:     2.7.6
  - Perl:     5.6.1

2.2.  command build:
- build rpm:
    ./build_660.sh
    (file tao ra trong duong dan: build/rpm/bf/build/rpm.mbn  )
- clean rpm:
    ./build_660.sh -c


########################################################################################################
python -u QcomPkg/buildit.py --variant LA -r DEBUG -t Sdm660Pkg,QcomToolsPkg
python -u QcomPkg/buildit.py --variant LA -r DEBUG -t Sdm660Pkg,QcomToolsPkg --build_flags=cleanall


python -u QcomPkg/buildit.py --variant LA -r RELEASE -t Sdm660Pkg,QcomToolsPkg
python -u QcomPkg/buildit.py --variant LA -r RELEASE -t Sdm660Pkg,QcomToolsPkg --build_flags=cleanall

adb reboot bootloader
fastboot flash xbl QcomPkg/Sdm660Pkg/Bin/660/LA/DEBUG/xbl.elf && fastboot reboot



I have some issues that need your help!
- About document, we need:
+ Maintenance guide documents.
+ User guide document in .doc format.
- About window application, we need:
+ Information that displays on main screen should covert into english language.
+ In language changing (English, China) option, should display default language is english when application startup.
+ Display exactly result. Although all of testcases are Pass, but total result is Fail. (This is important issue)
- About android application, we need:
+ Default displaying language is english instead of china.

We know we give you a lot of issues, so please help us resolve the important issues (red lines) firstly.


