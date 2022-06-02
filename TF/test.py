import tensorflow as tf

import os
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '1'

print(tf.reduce_sum(tf.random.normal([1000, 1000])))
