# project/server/user/forms.py


from flask_wtf import FlaskForm
from wtforms import StringField, PasswordField, IntegerField, DateTimeField
from wtforms.validators import DataRequired, Email, Length, EqualTo


class LoginForm(FlaskForm):
    email = StringField('Email Address', [DataRequired(), Email()])
    password = PasswordField('Password', [DataRequired()])


class RegisterForm(FlaskForm):
    email = StringField(
        'Email Address',
        validators=[
            DataRequired(),
            Email(message=None),
            Length(min=6, max=40)
        ]
    )
    password = PasswordField(
        'Password',
        validators=[DataRequired(), Length(min=6, max=25)]
    )
    confirm = PasswordField(
        'Confirm password',
        validators=[
            DataRequired(),
            EqualTo('password', message='Passwords must match.')
        ]
    )

def NotNull(pocet):
    if pocet == 0:
        return False
    return True

class PocetKravForm(FlaskForm):
    pocet = IntegerField(
        'Pocet krav',
        validators=[
            DataRequired(),
        ]
    )