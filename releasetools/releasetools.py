def FullOTA_InstallEnd(info):
    info.script.AppendExtra('mount("ext4", "EMMC", "/dev/block/platform/11120000.ufs/by-name/SYSTEM", "/system");');
    info.script.AppendExtra('run_program("/sbin/sed", "-i", "/exfat/d", "/system/etc/selinux/plat_sepolicy.cil");');
    info.script.AppendExtra('run_program("/sbin/sed", "-i", "/sdfat/d", "/system/etc/selinux/plat_sepolicy.cil");');
    info.script.AppendExtra('unmount("/system");');

def FullOTA_PostValidate(info):
    info.script.AppendExtra('run_program("/sbin/e2fsck", "-fy", "/dev/block/platform/11120000.ufs/by-name/SYSTEM");');
    info.script.AppendExtra('run_program("/sbin/resize2fs", "/dev/block/platform/11120000.ufs/by-name/SYSTEM");');
    info.script.AppendExtra('run_program("/sbin/e2fsck", "-fy", "/dev/block/platform/11120000.ufs/by-name/SYSTEM");');
