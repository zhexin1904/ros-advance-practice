;; Auto-generated. Do not edit!


(when (boundp 'action_exp::AddResult)
  (if (not (find-package "ACTION_EXP"))
    (make-package "ACTION_EXP"))
  (shadow 'AddResult (find-package "ACTION_EXP")))
(unless (find-package "ACTION_EXP::ADDRESULT")
  (make-package "ACTION_EXP::ADDRESULT"))

(in-package "ROS")
;;//! \htmlinclude AddResult.msg.html


(defclass action_exp::AddResult
  :super ros::object
  :slots (_result ))

(defmethod action_exp::AddResult
  (:init
   (&key
    ((:result __result) 0)
    )
   (send-super :init)
   (setq _result (round __result))
   self)
  (:result
   (&optional __result)
   (if __result (setq _result __result)) _result)
  (:serialization-length
   ()
   (+
    ;; int32 _result
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _result
       (write-long _result s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _result
     (setq _result (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get action_exp::AddResult :md5sum-) "034a8e20d6a306665e3a5b340fab3f09")
(setf (get action_exp::AddResult :datatype-) "action_exp/AddResult")
(setf (get action_exp::AddResult :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
int32 result

")



(provide :action_exp/AddResult "034a8e20d6a306665e3a5b340fab3f09")


