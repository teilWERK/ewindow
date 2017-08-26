from setuptools import setup

setup(
    name="ewindow",
    version='0.0.1',
    py_modules=['ewindow', 'python.baresip'],
    install_requires=[
	'enum34'
    ],
    entry_points='''
        [console_scripts]
        ewindow=ewindow:start
    ''',
)
