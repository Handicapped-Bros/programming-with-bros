import React from "react";
import PageHeader from "../../components/PageHeader/PageHeader";
import AuthHeader from "../../components/AuthHeader/AuthHeader";
import { Link, useNavigate } from "react-router-dom";
import { useDispatch, useSelector } from "react-redux";
import { createToast } from "../../utils/toast";
import { getAuthData, setMessageEmpty } from "../../features/auth/authSlice";
import useFormFields from "../../hooks/useFormFields";
import { useEffect } from "react";
import { resetPassword } from "../../features/auth/authApiSlice";

const Forgot = () => {
  // hooks
  const dispatch = useDispatch();
  const { message, error, loader } = useSelector(getAuthData);
  const navigate = useNavigate();

  // form feild manage
  const { input, handleInputChange, resetForm } = useFormFields({
    auth: "",
  });

  // handle reset pass
  const handleSubmitPass = (e) => {
    e.preventDefault();

    dispatch(resetPassword(input));
  };

  useEffect(() => {
    if (message) {
      createToast(message, "success");
      dispatch(setMessageEmpty());
      resetForm();
      navigate("/reset-password");
    }

    if (error) {
      createToast(error);
      dispatch(setMessageEmpty());
    }
  }, [message, error, dispatch, navigate, resetForm]);

  return (
    <>
      <PageHeader title="Reset Password" />
      <div className="auth-container">
        <div className="auth-wraper">
          <div className="auth-top">
            <AuthHeader
              title="Reset your password"
              desc="Lorem ipsum dolor sit amet consectetur adipisicing elit. Quibusdam"
            />

            <div className="auth-form">
              <form onSubmit={handleSubmitPass}>
                <input
                  type="text"
                  placeholder="Email or Phone Number"
                  value={input.auth}
                  name="auth"
                  onChange={handleInputChange}
                />
                <button type="submit" className="bg-fb">
                  Reset Password
                </button>
              </form>
            </div>
          </div>
          <div className="auth-bottom">
            <Link to="/login">Log in Now</Link>
          </div>
        </div>
      </div>
    </>
  );
};

export default Forgot;
