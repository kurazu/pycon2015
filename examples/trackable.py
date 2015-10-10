class Trackable(object):

    def __init__(self, name):
        self.name = name
        print('CREATE {}'.format(name))

    def __del__(self):
        print('DELETE {}'.format(self.name))
