; ModuleID = 'C:/Temp/RC/HWA_func/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@p_str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1
@p_str1 = private unnamed_addr constant [10 x i8] c"AXI4LiteS\00", align 1
@p_str2 = private unnamed_addr constant [19 x i8] c"-bus_bundle hwa_io\00", align 1
@str = internal constant [9 x i8] c"HWA_func\00"

define void @HWA_func(i32 %x, i32 %y, i32* %id, i32* %out_r) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap(i32 %x) nounwind, !map !0
  call void (...)* @_ssdm_op_SpecBitsMap(i32 %y) nounwind, !map !6
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %id) nounwind, !map !10
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %out_r) nounwind, !map !16
  call void (...)* @_ssdm_op_SpecTopModule([9 x i8]* @str) nounwind
  %y_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %y) nounwind
  %x_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %x) nounwind
  call void (...)* @_ssdm_op_SpecIFCore(i32 %y, [1 x i8]* @p_str, [10 x i8]* @p_str1, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [19 x i8]* @p_str2) nounwind
  call void (...)* @_ssdm_op_SpecIFCore(i32 0, [1 x i8]* @p_str, [10 x i8]* @p_str1, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [19 x i8]* @p_str2) nounwind
  call void (...)* @_ssdm_op_SpecIFCore(i32 %x, [1 x i8]* @p_str, [10 x i8]* @p_str1, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [19 x i8]* @p_str2) nounwind
  call void @_ssdm_op_Write.ap_auto.i32P(i32* %id, i32 125) nounwind
  call void (...)* @_ssdm_op_SpecIFCore(i32* %id, [1 x i8]* @p_str, [10 x i8]* @p_str1, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [19 x i8]* @p_str2) nounwind
  br label %1

; <label>:1                                       ; preds = %2, %0
  %c = phi i32 [ %x_read, %0 ], [ %a, %2 ]
  %b = phi i32 [ %y_read, %0 ], [ %c, %2 ]
  %tmp = icmp eq i32 %c, 0
  br i1 %tmp, label %3, label %2

; <label>:2                                       ; preds = %1
  %a = srem i32 %b, %c
  br label %1

; <label>:3                                       ; preds = %1
  call void @_ssdm_op_Write.ap_auto.i32P(i32* %out_r, i32 %b) nounwind
  call void (...)* @_ssdm_op_SpecIFCore(i32* %out_r, [1 x i8]* @p_str, [10 x i8]* @p_str1, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [19 x i8]* @p_str2) nounwind
  ret void
}

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak void @_ssdm_op_SpecIFCore(...) {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_Read.ap_auto.i32(i32) {
entry:
  ret i32 %0
}

define weak void @_ssdm_op_Write.ap_auto.i32P(i32*, i32) {
entry:
  store i32 %1, i32* %0
  ret void
}

!llvm.map.gv = !{}

!0 = metadata !{metadata !1}
!1 = metadata !{i32 0, i32 31, metadata !2}
!2 = metadata !{metadata !3}
!3 = metadata !{metadata !"x", metadata !4, metadata !"int"}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 0, i32 0, i32 0}
!6 = metadata !{metadata !7}
!7 = metadata !{i32 0, i32 31, metadata !8}
!8 = metadata !{metadata !9}
!9 = metadata !{metadata !"y", metadata !4, metadata !"int"}
!10 = metadata !{metadata !11}
!11 = metadata !{i32 0, i32 31, metadata !12}
!12 = metadata !{metadata !13}
!13 = metadata !{metadata !"id", metadata !14, metadata !"int"}
!14 = metadata !{metadata !15}
!15 = metadata !{i32 0, i32 0, i32 1}
!16 = metadata !{metadata !17}
!17 = metadata !{i32 0, i32 31, metadata !18}
!18 = metadata !{metadata !19}
!19 = metadata !{metadata !"out", metadata !14, metadata !"int"}
